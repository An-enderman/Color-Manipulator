package;

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

class PublicFunctions extends FlxState
{
	public var IntContainer:Array<Int> = [];
	public var SepIntContainer:Array<Int> = [];
	public var StringContainer:Array<Int> = [];
	public var SepStringContainer:Array<Int> = [];

	override public function create()
	{
		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}

	public function hex_separator(values):Void {}

	public function hex_to_decimal(values):return {}

	// turns decimal numbers in hexadecimal numbers
	public function decimal_to_hex(values):return {}
}
