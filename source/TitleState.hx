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
	var Program_title:FlxText;
	var colormixerbutton:FlxUIButton;
	var UN_BUTTON_COLOR:FlxColor = FlxColor.GREEN;
	var UN_LB_COLOR:FlxColor = FlxColor.WHITE;
	var Credit:FlxText;

	override public function create()
	{
		super.create();

		// background stuff
		background = new FlxSprite();
		background.makeGraphic(FlxG.width, FlxG.height, backgroundcolor);
		background.screenCenter();
		add(background);

		// program title stuff
		Program_title = new FlxText();
		Program_title.y = 0;
		Program_title.size = 30;
		Program_title.text = 'Color Manipulator Program';
		Program_title.x = (FlxG.width / 2) - (Program_title.fieldWidth / 2);
		add(Program_title);

		// colormixerbutton stuff
		colormixerbutton = new FlxUIButton(0, 130, 'manipulate colors', function()
		{
			FlxG.switchState(new ManipulateColorsState());
		});
		colormixerbutton.screenCenter(X);
		colormixerbutton.color = UN_BUTTON_COLOR;
		colormixerbutton.label.color = UN_LB_COLOR;
		colormixerbutton.setGraphicSize(120, 60);
		add(colormixerbutton);

		// credit stuff
		Credit = new FlxText();
		Credit.x = 0;
		Credit.y = FlxG.height - 25;
		Credit.size = 10;
		Credit.text = 'Everything here is programmed by me(An-enderman)';
		add(Credit);
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}

	// private function execute_mixing(values):return {
	// }
}
