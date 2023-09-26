package;

// import PublicFunctions;
import TitleState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.ui.FlxUI;
import flixel.addons.ui.FlxUIButton;
import flixel.addons.ui.FlxUIInputText;
import flixel.addons.ui.FlxUINumericStepper;
import flixel.addons.ui.FlxUITabMenu;
import flixel.addons.ui.FlxUIText;
import flixel.text.FlxText;
import flixel.ui.FlxBar;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import flixel.util.FlxGradient;
import lime.math.ARGB;

class ManipulateColorsState extends FlxState
{
	var background:FlxSprite;
	var tabMenu:FlxUITabMenu;
	var LabAndNames:Array<{name:String, label:String}> = [
		{name: "Color Mixer", label: 'Color Mixer'},
		// {name: "Color Inverter", label: 'Color Inverter'},
		// {name: "How color formats work", label: 'How color formats work'}
	];
	var backgroundcolor:FlxColor = 0xFF353535;
	private var backbutton:FlxUIButton;
	var colorsave:FlxUIInputText;

	override public function create()
	{
		super.create();

		// background stuff
		background = new FlxSprite();
		background.makeGraphic(FlxG.width, FlxG.height, backgroundcolor);
		background.screenCenter();
		add(background);

		// backbutton stuff
		backbutton = new FlxUIButton(5, 5, "back to the main menu", function()
		{
			FlxG.switchState(new TitleState());
		});
		backbutton.color = FlxColor.GRAY;
		backbutton.label.color = FlxColor.WHITE;
		backbutton.setGraphicSize(60, 40);
		add(backbutton);

		// colorsave stuff
		for (i in 0...5)
		{
			colorsave = new FlxUIInputText(5, 50, 90, '', 9);
			colorsave.x = 5;
			colorsave.y = 50 + (i * 30);
			add(colorsave);
		}

		// tabMenu stuff
		tabMenu = new FlxUITabMenu(null, LabAndNames, true);
		tabMenu.resize(FlxG.width - 100, FlxG.height);
		tabMenu.x = 100;
		tabMenu.y = 0;
		add(tabMenu);

		addColorMixerUI();
	}

	var oldcolorimput:String = '';
	var oldcolorimput2:String = '';
	var color1:Dynamic = '';
	var color2:Dynamic = '';
	var color1_ARGB:ARGB = 0xff000000;
	var color2_ARGB:ARGB = 0xff000000;
	var pre_result:ARGB = 0xff000000;
	var colors:String = '0';
	var color_storage:Array<FlxColor> = [0xFF000000, 0xFFFFFFFF];
	var result:FlxColor = 0xFF7F7F7F;
	var colorbar:FlxSprite;
	var resultsquare:FlxSprite;
	var colorarray:Array<Int> = [0, 0, 0, 255, 255, 255];
	var mixbutton:FlxUIButton;
	var result_text:FlxUIText;

	var transformer:Dynamic;
	var color_temp_storage:FlxColor;

	var common_stepsize:Int = 1;
	var stepper_r1:FlxUINumericStepper;
	var stepper_g1:FlxUINumericStepper;
	var stepper_b1:FlxUINumericStepper;
	var stepper_r2:FlxUINumericStepper;
	var stepper_g2:FlxUINumericStepper;
	var stepper_b2:FlxUINumericStepper;

	function addColorMixerUI()
	{
		var tab_group_mixer = new FlxUI(null, tabMenu);
		tab_group_mixer.name = 'Color Mixer';

		// colorbar stuff
		colorbar = new FlxSprite((tabMenu.width / 2) - 55, (tabMenu.height / 2) - 55);
		colorbar = createGradientFlxSprite(color_storage, 1, 135);

		// resultsquare stuff
		resultsquare = new FlxSprite();
		resultsquare.makeGraphic(100, 100, result);
		resultsquare.x = colorbar.x + 10;
		resultsquare.y = colorbar.y + 10;

		// steppers stuff
		stepper_r1 = new FlxUINumericStepper(70, 50, common_stepsize, colorarray[0], 0, 255);
		stepper_g1 = new FlxUINumericStepper(stepper_r1.x, stepper_r1.y + 30, common_stepsize, colorarray[1], 0, 255);
		stepper_b1 = new FlxUINumericStepper(stepper_g1.x, stepper_g1.y + 30, common_stepsize, colorarray[2], 0, 255);
		stepper_r2 = new FlxUINumericStepper(stepper_r1.x + 70, 50, common_stepsize, colorarray[3], 0, 255);
		stepper_g2 = new FlxUINumericStepper(stepper_r2.x, stepper_g1.y, common_stepsize, colorarray[4], 0, 255);
		stepper_b2 = new FlxUINumericStepper(stepper_g2.x, stepper_b1.y, common_stepsize, colorarray[5], 0, 255);

		// mixbutton stuff
		/*mixbutton = new FlxUIButton(20, colorimput.y - 30, 'mix', function() {});
			mixbutton.color = FlxColor.GREEN;
			mixbutton.label.color = FlxColor.WHITE;
			mixbutton.setGraphicSize(40, 24); */

		tab_group_mixer.add(stepper_r1);
		tab_group_mixer.add(stepper_r2);
		tab_group_mixer.add(stepper_g1);
		tab_group_mixer.add(stepper_g2);
		tab_group_mixer.add(stepper_b1);
		tab_group_mixer.add(stepper_b2);
		tab_group_mixer.add(colorbar);
		tab_group_mixer.add(resultsquare);
		// tab_group_mixer.add(mixbutton);
		tabMenu.addGroup(tab_group_mixer);
	}

	override public function update(elapsed:Float)
	{
		if (stepper_r1.value != colorarray[0])
		{
			colorarray[0] = Math.round(stepper_r1.value);
			color_storage[0] = FlxColor.fromRGB(colorarray[0], colorarray[1], colorarray[2], 255);
		}
		if (stepper_g1.value != colorarray[1])
		{
			colorarray[0] = Math.round(stepper_g1.value);
			color_storage[0] = FlxColor.fromRGB(colorarray[0], colorarray[1], colorarray[2], 255);
		}
		if (stepper_b1.value != colorarray[1])
		{
			colorarray[2] = Math.round(stepper_b1.value);
			color_storage[0] = FlxColor.fromRGB(colorarray[0], colorarray[1], colorarray[2], 255);
		}
		if (stepper_r2.value != colorarray[0])
		{
			colorarray[3] = Math.round(stepper_r2.value);
			color_storage[1] = FlxColor.fromRGB(colorarray[3], colorarray[4], colorarray[5], 255);
		}
		if (stepper_g2.value != colorarray[1])
		{
			colorarray[4] = Math.round(stepper_g2.value);
			color_storage[1] = FlxColor.fromRGB(colorarray[3], colorarray[4], colorarray[5], 255);
		}
		if (stepper_b2.value != colorarray[1])
		{
			colorarray[4] = Math.round(stepper_b2.value);
			color_storage[1] = FlxColor.fromRGB(colorarray[3], colorarray[4], colorarray[5], 255);
		}
		super.update(elapsed);
	}
}
