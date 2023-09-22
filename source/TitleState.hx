package;

import ManipulateColorsState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.ui.FlxUIButton;
import flixel.addons.ui.FlxUIInputText;
import flixel.addons.ui.FlxUIText;
import flixel.text.FlxText;
import flixel.ui.FlxBar;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;

class TitleState extends FlxState
{
	var backgroundcolor:FlxColor = 0xFF353535;
	var background:FlxSprite;
	var colormixerbutton:FlxUIButton;
	var colorextractorbutton:FlxUIButton;
	var colorinverterbutton:FlxUIButton;
	var UN_BUTTON_COLOR:FlxColor = FlxColor.GREEN;
	var UN_LB_COLOR:FlxColor = FlxColor.WHITE;

	override public function create()
	{
		super.create();

		// background stuff
		background = new FlxSprite();
		background.makeGraphic(FlxG.width, FlxG.height, backgroundcolor);
		background.screenCenter();
		add(background);

		// colormixerbutton stuff
		colormixerbutton = new FlxUIButton(0, 70, 'manipulate colors', function()
		{
			FlxG.switchState(new ManipulateColorsState());
		});
		colormixerbutton.screenCenter(X);
		colormixerbutton.color = UN_BUTTON_COLOR;
		colormixerbutton.label.color = UN_LB_COLOR;
		colormixerbutton.setGraphicSize(120, 60);
		add(colormixerbutton);

		// colorextractorbutton stuff
		colorextractorbutton = new FlxUIButton(0, 0, 'WIP');
		colorextractorbutton.color = UN_BUTTON_COLOR;
		colorextractorbutton.label.color = UN_LB_COLOR;
		colorextractorbutton.screenCenter(X);
		colorextractorbutton.setGraphicSize(120, 60);
		colorextractorbutton.y = colormixerbutton.y + 120;
		add(colorextractorbutton);

		// colorinverterbutton stuff
		colorinverterbutton = new FlxUIButton(0, 0, 'WIP');
		colorinverterbutton.color = UN_BUTTON_COLOR;
		colorinverterbutton.label.color = UN_LB_COLOR;
		colorinverterbutton.setGraphicSize(120, 60);
		colorinverterbutton.screenCenter(X);
		colorinverterbutton.y = colorextractorbutton.y + 120;
		add(colorinverterbutton);
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}

	// private function execute_mixing(values):return {
	// }
}
