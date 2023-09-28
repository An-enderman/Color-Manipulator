package;

// import PublicFunctions;
import TitleState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.ui.FlxSlider;
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
	private var backbutton:FlxUIButton;

	override public function create()
	{
		super.create();

		// background stuff
		background = new FlxSprite();
		background.makeGraphic(FlxG.width, FlxG.height, 0xFF353535);
		background.screenCenter();
		add(background);

		// backbutton stuff
		backbutton = new FlxUIButton(0, 0, "back to the main menu", function()
		{
			FlxG.switchState(new TitleState());
		});
		backbutton.color = FlxColor.GRAY;
		backbutton.label.color = FlxColor.WHITE;
		backbutton.setGraphicSize(60, 40);
		add(backbutton);

		// tabMenu stuff
		tabMenu = new FlxUITabMenu(null, LabAndNames, true);
		tabMenu.resize(FlxG.width, FlxG.height - 41);
		tabMenu.x = 0;
		tabMenu.y = 41;
		add(tabMenu);

		addColorMixerUI();
	}

	var colors:String = '0';
	var color_storage:Array<FlxColor> = [0xFFFFFFFF, 0xFFFFFFFF];
	var result:FlxColor = 0xFFFFFFFF;
	var colorbar1:FlxSprite;
	var colorbar2:FlxSprite;
	var result_storage:Array<Int> = [127, 127, 127];
	var resultsquare:FlxSprite;
	var oldcolorarray:Array<Int> = [255, 255, 255, 255, 255, 255];
	var colorarray:Array<Int> = [255, 255, 255, 255, 255, 255];
	var mixbutton:FlxUIButton;
	var result_text:FlxUIText;

	var transformer:Dynamic;
	var color_temp_storage:FlxColor;

	var common_stepsize:Int = 10;

	var RGB_text:FlxText;
	var stepper_r1:FlxUINumericStepper;

	/*var stepper_g1:FlxUINumericStepper;
		var stepper_b1:FlxUINumericStepper;
		var stepper_r2:FlxUINumericStepper;
		var stepper_g2:FlxUINumericStepper;
		var stepper_b2:FlxUINumericStepper; */
	function addColorMixerUI()
	{
		var tab_group_mixer = new FlxUI(null, tabMenu);
		tab_group_mixer.name = 'Color Mixer';

		// colorbar1 stuff
		colorbar1 = new FlxSprite();
		colorbar1.makeGraphic(60, 120, color_storage[0]);
		colorbar1.x = 215;
		colorbar1.screenCenter(Y);

		// colorbar2 stuff
		colorbar2 = new FlxSprite();
		colorbar2.makeGraphic(60, 120, color_storage[1]);
		colorbar2.x = 275;
		colorbar2.screenCenter(Y);

		// resultsquare stuff
		resultsquare = new FlxSprite();
		resultsquare.makeGraphic(100, 100, result);
		resultsquare.x = colorbar1.x + 10;
		resultsquare.y = colorbar1.y + 10;

		// steppers stuff
		stepper_r1 = new FlxUINumericStepper(70, 65, common_stepsize, colorarray[1], 0, 255);
		stepper_g1 = new FlxUINumericStepper(stepper_r1.x, stepper_r1.y + 30, common_stepsize, colorarray[1], 0, 255);
		//	stepper_b1 = new FlxUINumericStepper(stepper_g1.x, stepper_g1.y + 30, common_stepsize, colorarray[2], 0, 255);
		stepper_r2 = new FlxUINumericStepper(stepper_r1.x + 70, stepper_r1.y, common_stepsize, colorarray[3], 0, 255);
		stepper_g2 = new FlxUINumericStepper(stepper_r2.x, stepper_g1.y, common_stepsize, colorarray[4], 0, 255);
		//	stepper_b2 = new FlxUINumericStepper(stepper_g2.x, stepper_b1.y, common_stepsize, colorarray[5], 0, 255);

		// RGB_text stuff
		RGB_text = new FlxText();
		RGB_text.text = 'RED 1';
		RGB_text.size = 10;
		RGB_text.x = 70;
		RGB_text.y = 50;
		RGB_text.color = FlxColor.RED;
		tab_group_mixer.add(RGB_text);

		for (y in 0...0)
		{
			for (x in 0...0)
			{
				if (y == 0)
				{
					if (x == 0) {}
					else
					{
						RGB_text.text = 'RED 2';
					}
				}
				if (y == 1)
				{
					if (x == 0) {}
					else
					{
						RGB_text.text = 'GREEN 1';
					}
				}
			}
		}

		// mixbutton stuff
		mixbutton = new FlxUIButton(tabMenu.x + 40, colorbar1.y - 30, 'mix', function()
		{
			result_storage[0] = Math.round((colorarray[0] + colorarray[3]) / 2);
			result_storage[1] = Math.round((colorarray[1] + colorarray[4]) / 2);
			result_storage[2] = Math.round((colorarray[2] + colorarray[5]) / 2);
			resultsquare.color = FlxColor.fromRGB(result_storage[0], result_storage[1], result_storage[2]);
		});
		mixbutton.screenCenter(Y);
		mixbutton.x = tabMenu.x + 40;
		mixbutton.color = FlxColor.GREEN;
		mixbutton.label.color = FlxColor.WHITE;
		mixbutton.setGraphicSize(40, 24);

		tab_group_mixer.add(RGB_text);
		tab_group_mixer.add(stepper_r1);
		/*tab_group_mixer.add(stepper_r2);
			tab_group_mixer.add(stepper_g1);
			tab_group_mixer.add(stepper_g2);
			tab_group_mixer.add(stepper_b1);
			tab_group_mixer.add(stepper_b2); */
		tab_group_mixer.add(colorbar1);
		tab_group_mixer.add(colorbar2);
		tab_group_mixer.add(resultsquare);
		tab_group_mixer.add(mixbutton);
		tabMenu.addGroup(tab_group_mixer);
	}

	override public function update(elapsed:Float)
	{
		/*if (stepper_r1.value != colorarray[0])
			{
				colorarray[0] = Math.round(stepper_r1.value);
				color_storage[0] = FlxColor.fromRGB(colorarray[0], colorarray[1], colorarray[2]);
				colorbar1.color = color_storage[0];
			}
			if (stepper_g1.value != colorarray[1])
			{
				colorarray[1] = Math.round(stepper_g1.value);
				color_storage[0] = FlxColor.fromRGB(colorarray[0], colorarray[1], colorarray[2]);
				colorbar1.color = color_storage[0];
			}
			if (stepper_b1.value != colorarray[2])
			{
				colorarray[2] = Math.round(stepper_b1.value);
				color_storage[0] = FlxColor.fromRGB(colorarray[0], colorarray[1], colorarray[2]);
				colorbar1.color = color_storage[0];
			}
			if (stepper_r2.value != colorarray[3])
			{
				colorarray[3] = Math.round(stepper_r2.value);
				color_storage[1] = FlxColor.fromRGB(colorarray[3], colorarray[4], colorarray[5]);
				colorbar2.color = color_storage[1];
			}
			if (stepper_g2.value != colorarray[4])
			{
				colorarray[4] = Math.round(stepper_g2.value);
				color_storage[1] = FlxColor.fromRGB(colorarray[3], colorarray[4], colorarray[5]);
				colorbar2.color = color_storage[1];
			}
			if (stepper_b2.value != colorarray[5])
			{
				colorarray[5] = Math.round(stepper_b2.value);
				color_storage[1] = FlxColor.fromRGB(colorarray[3], colorarray[4], colorarray[5]);
				colorbar2.color = color_storage[1];
		}*/
		super.update(elapsed);
	}
}
