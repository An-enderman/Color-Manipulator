#include <hxcpp.h>

#ifndef INCLUDED_ManipulateColorsState
#include <ManipulateColorsState.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIInputText
#include <flixel/addons/ui/FlxUIInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUINumericStepper
#include <flixel/addons/ui/FlxUINumericStepper.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITabMenu
#include <flixel/addons/ui/FlxUITabMenu.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFireTongue
#include <flixel/addons/ui/interfaces/IFireTongue.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f9b7d31185569caa_20_new,"ManipulateColorsState","new",0x7419d339,"ManipulateColorsState.new","ManipulateColorsState.hx",20,0x0ada3657)
static const int _hx_array_data_6c97c2c7_1[] = {
	(int)-16777216,(int)-1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f9b7d31185569caa_46_create,"ManipulateColorsState","create",0x09e5f1c3,"ManipulateColorsState.create","ManipulateColorsState.hx",46,0x0ada3657)
HX_LOCAL_STACK_FRAME(_hx_pos_f9b7d31185569caa_34_create,"ManipulateColorsState","create",0x09e5f1c3,"ManipulateColorsState.create","ManipulateColorsState.hx",34,0x0ada3657)
HX_LOCAL_STACK_FRAME(_hx_pos_f9b7d31185569caa_105_addColorMixerUI,"ManipulateColorsState","addColorMixerUI",0x60dd3094,"ManipulateColorsState.addColorMixerUI","ManipulateColorsState.hx",105,0x0ada3657)
HX_LOCAL_STACK_FRAME(_hx_pos_f9b7d31185569caa_156_update,"ManipulateColorsState","update",0x14dc10d0,"ManipulateColorsState.update","ManipulateColorsState.hx",156,0x0ada3657)

void ManipulateColorsState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_f9b7d31185569caa_20_new)
HXLINE(  95)		this->common_stepsize = 1;
HXLINE(  87)		this->oldcolorarray = ::Array_obj< ::Dynamic>::__new(2)->init(0, ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("b",62,00,00,00),( (Float)(0) ))
            			->setFixed(1,HX_("g",67,00,00,00),( (Float)(0) ))
            			->setFixed(2,HX_("r",72,00,00,00),( (Float)(0) ))))->init(1, ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("b",62,00,00,00),( (Float)(255) ))
            			->setFixed(1,HX_("g",67,00,00,00),( (Float)(255) ))
            			->setFixed(2,HX_("r",72,00,00,00),( (Float)(255) ))));
HXLINE(  86)		this->colorarray = ::Array_obj< ::Dynamic>::__new(2)->init(0, ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("b",62,00,00,00),( (Float)(0) ))
            			->setFixed(1,HX_("g",67,00,00,00),( (Float)(0) ))
            			->setFixed(2,HX_("r",72,00,00,00),( (Float)(0) ))))->init(1, ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("b",62,00,00,00),( (Float)(255) ))
            			->setFixed(1,HX_("g",67,00,00,00),( (Float)(255) ))
            			->setFixed(2,HX_("r",72,00,00,00),( (Float)(255) ))));
HXLINE(  85)		this->interractable_colorarray = ::Array_obj< ::Dynamic>::__new(2)->init(0, ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("b",62,00,00,00),( (Float)(0) ))
            			->setFixed(1,HX_("g",67,00,00,00),( (Float)(0) ))
            			->setFixed(2,HX_("r",72,00,00,00),( (Float)(0) ))))->init(1, ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("b",62,00,00,00),( (Float)(255) ))
            			->setFixed(1,HX_("g",67,00,00,00),( (Float)(255) ))
            			->setFixed(2,HX_("r",72,00,00,00),( (Float)(255) ))));
HXLINE(  82)		this->result = -8421505;
HXLINE(  81)		this->empty = ::Array_obj< int >::fromData( _hx_array_data_6c97c2c7_1,2);
HXLINE(  80)		this->colors = HX_("0",30,00,00,00);
HXLINE(  79)		this->fill = ::Array_obj< int >::__new(0);
HXLINE(  78)		this->pre_result = -16777216;
HXLINE(  77)		this->color2_ARGB = -16777216;
HXLINE(  76)		this->color1_ARGB = -16777216;
HXLINE(  75)		this->color2 = HX_("",00,00,00,00);
HXLINE(  74)		this->color1 = HX_("",00,00,00,00);
HXLINE(  73)		this->oldcolorimput2 = HX_("",00,00,00,00);
HXLINE(  72)		this->oldcolorimput = HX_("",00,00,00,00);
HXLINE(  29)		this->backgroundcolor = -13290187;
HXLINE(  24)		this->LabAndNames = ::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("name",4b,72,ff,48),HX_("Color Mixer",4c,ba,cf,d0))
            			->setFixed(1,HX_("label",f4,0d,af,6f),HX_("Color Mixer",4c,ba,cf,d0))));
HXLINE(  20)		super::__construct(MaxSize);
            	}

Dynamic ManipulateColorsState_obj::__CreateEmpty() { return new ManipulateColorsState_obj; }

void *ManipulateColorsState_obj::_hx_vtable = 0;

Dynamic ManipulateColorsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ManipulateColorsState_obj > _hx_result = new ManipulateColorsState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ManipulateColorsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x399da423) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x399da423;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void ManipulateColorsState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_f9b7d31185569caa_46_create)
HXLINE(  46)			 ::flixel::FlxState nextState =  ::TitleState_obj::__alloc( HX_CTX ,null());
HXDLIN(  46)			 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN(  46)			 ::Dynamic _hx_tmp = ::Reflect_obj::field(::flixel::FlxG_obj::game->_state,HX_("switchTo",8f,f8,d6,0d));
HXDLIN(  46)			if (( (bool)(_hx_tmp(nextState)) )) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxState,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_f9b7d31185569caa_46_create)
HXLINE(  46)					if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXLINE(  46)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE(  46)				::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_f9b7d31185569caa_34_create)
HXLINE(  35)		this->super::create();
HXLINE(  38)		this->background =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  39)		this->background->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,this->backgroundcolor,null(),null());
HXLINE(  40)		{
HXLINE(  40)			 ::flixel::FlxSprite _this = this->background;
HXDLIN(  40)			int axes = 17;
HXDLIN(  40)			bool _hx_tmp;
HXDLIN(  40)			if ((axes != 1)) {
HXLINE(  40)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  40)				_hx_tmp = true;
            			}
HXDLIN(  40)			if (_hx_tmp) {
HXLINE(  40)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  40)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  40)			bool _hx_tmp1;
HXDLIN(  40)			if ((axes != 16)) {
HXLINE(  40)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  40)				_hx_tmp1 = true;
            			}
HXDLIN(  40)			if (_hx_tmp1) {
HXLINE(  40)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  40)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  41)		this->add(this->background);
HXLINE(  44)		this->backbutton =  ::flixel::addons::ui::FlxUIButton_obj::__alloc( HX_CTX ,5,5,HX_("back to the main menu",2b,bf,53,70), ::Dynamic(new _hx_Closure_1()),null(),null(),null());
HXLINE(  48)		this->backbutton->set_color(-8355712);
HXLINE(  49)		( ( ::flixel::text::FlxText)(this->backbutton->label) )->set_color(-1);
HXLINE(  50)		this->backbutton->setGraphicSize(60,40);
HXLINE(  51)		this->add(this->backbutton);
HXLINE(  54)		{
HXLINE(  55)			{
HXLINE(  56)				this->colorsave =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,5,50,90,HX_("",00,00,00,00),9,null(),null(),null());
HXLINE(  57)				this->colorsave->set_x(( (Float)(5) ));
HXLINE(  58)				this->colorsave->set_y(( (Float)(50) ));
HXLINE(  59)				this->add(this->colorsave);
            			}
HXLINE(  55)			{
HXLINE(  56)				this->colorsave =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,5,50,90,HX_("",00,00,00,00),9,null(),null(),null());
HXLINE(  57)				this->colorsave->set_x(( (Float)(5) ));
HXLINE(  58)				this->colorsave->set_y(( (Float)(80) ));
HXLINE(  59)				this->add(this->colorsave);
            			}
HXLINE(  55)			{
HXLINE(  56)				this->colorsave =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,5,50,90,HX_("",00,00,00,00),9,null(),null(),null());
HXLINE(  57)				this->colorsave->set_x(( (Float)(5) ));
HXLINE(  58)				this->colorsave->set_y(( (Float)(110) ));
HXLINE(  59)				this->add(this->colorsave);
            			}
HXLINE(  55)			{
HXLINE(  56)				this->colorsave =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,5,50,90,HX_("",00,00,00,00),9,null(),null(),null());
HXLINE(  57)				this->colorsave->set_x(( (Float)(5) ));
HXLINE(  58)				this->colorsave->set_y(( (Float)(140) ));
HXLINE(  59)				this->add(this->colorsave);
            			}
HXLINE(  55)			{
HXLINE(  56)				this->colorsave =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,5,50,90,HX_("",00,00,00,00),9,null(),null(),null());
HXLINE(  57)				this->colorsave->set_x(( (Float)(5) ));
HXLINE(  58)				this->colorsave->set_y(( (Float)(170) ));
HXLINE(  59)				this->add(this->colorsave);
            			}
            		}
HXLINE(  63)		this->tabMenu =  ::flixel::addons::ui::FlxUITabMenu_obj::__alloc( HX_CTX ,null(),null(),this->LabAndNames,null(),true,null(),null());
HXLINE(  64)		this->tabMenu->resize(( (Float)((::flixel::FlxG_obj::width - 100)) ),( (Float)(::flixel::FlxG_obj::height) ));
HXLINE(  65)		this->tabMenu->set_x(( (Float)(100) ));
HXLINE(  66)		this->tabMenu->set_y(( (Float)(0) ));
HXLINE(  67)		this->add(this->tabMenu);
HXLINE(  69)		this->addColorMixerUI();
            	}


void ManipulateColorsState_obj::addColorMixerUI(){
            	HX_GC_STACKFRAME(&_hx_pos_f9b7d31185569caa_105_addColorMixerUI)
HXLINE( 106)		 ::flixel::addons::ui::FlxUI tab_group_mixer =  ::flixel::addons::ui::FlxUI_obj::__alloc( HX_CTX ,null(),this->tabMenu,null(),null(),null(),null());
HXLINE( 107)		tab_group_mixer->name = HX_("Color Mixer",4c,ba,cf,d0);
HXLINE( 110)		this->colorbar =  ::flixel::ui::FlxBar_obj::__alloc( HX_CTX ,((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )) - ( (Float)(55) )),((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) - ( (Float)(55) )),::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT_dyn(),120,120,::hx::ObjectPtr<OBJ_>(this),this->colors,0,1,null());
HXLINE( 111)		this->colorbar->createGradientBar(this->empty,this->fill,1,135,null(),null());
HXLINE( 114)		this->resultsquare =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 115)		this->resultsquare->makeGraphic(100,100,this->result,null(),null());
HXLINE( 116)		this->resultsquare->set_x((this->colorbar->x + 10));
HXLINE( 117)		this->resultsquare->set_y((this->colorbar->y + 10));
HXLINE( 120)		this->stepper_r1 =  ::flixel::addons::ui::FlxUINumericStepper_obj::__alloc( HX_CTX ,70,50,this->common_stepsize,this->interractable_colorarray->__get(0)->__Field(HX_("r",72,00,00,00),::hx::paccDynamic),0,255,null(),null(),null(),null(),null(),null());
HXLINE( 121)		this->stepper_r2 =  ::flixel::addons::ui::FlxUINumericStepper_obj::__alloc( HX_CTX ,(this->stepper_r1->x + 70),50,this->common_stepsize,this->interractable_colorarray->__get(1)->__Field(HX_("r",72,00,00,00),::hx::paccDynamic),0,255,null(),null(),null(),null(),null(),null());
HXLINE( 122)		this->stepper_g1 =  ::flixel::addons::ui::FlxUINumericStepper_obj::__alloc( HX_CTX ,this->stepper_r1->x,(this->stepper_r1->y + 20),this->common_stepsize,this->interractable_colorarray->__get(0)->__Field(HX_("g",67,00,00,00),::hx::paccDynamic),0,255,null(),null(),null(),null(),null(),null());
HXLINE( 123)		this->stepper_g2 =  ::flixel::addons::ui::FlxUINumericStepper_obj::__alloc( HX_CTX ,this->stepper_r2->x,this->stepper_g1->y,this->common_stepsize,this->interractable_colorarray->__get(1)->__Field(HX_("g",67,00,00,00),::hx::paccDynamic),0,255,null(),null(),null(),null(),null(),null());
HXLINE( 143)		tab_group_mixer->add(this->stepper_r1).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 144)		tab_group_mixer->add(this->stepper_r2).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 145)		tab_group_mixer->add(this->stepper_g1).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 146)		tab_group_mixer->add(this->stepper_g2).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 147)		tab_group_mixer->add(this->colorbar).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 148)		tab_group_mixer->add(this->resultsquare).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 152)		this->tabMenu->addGroup(tab_group_mixer);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ManipulateColorsState_obj,addColorMixerUI,(void))

void ManipulateColorsState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_f9b7d31185569caa_156_update)
HXLINE( 157)		if (::hx::IsPointerNotEq( this->interractable_colorarray,this->oldcolorarray )) {
HXLINE( 159)			this->interractable_colorarray = this->colorarray;
HXLINE( 160)			this->oldcolorarray = this->interractable_colorarray;
            		}
HXLINE( 162)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< ManipulateColorsState_obj > ManipulateColorsState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< ManipulateColorsState_obj > __this = new ManipulateColorsState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< ManipulateColorsState_obj > ManipulateColorsState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	ManipulateColorsState_obj *__this = (ManipulateColorsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ManipulateColorsState_obj), true, "ManipulateColorsState"));
	*(void **)__this = ManipulateColorsState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

ManipulateColorsState_obj::ManipulateColorsState_obj()
{
}

void ManipulateColorsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ManipulateColorsState);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(tabMenu,"tabMenu");
	HX_MARK_MEMBER_NAME(LabAndNames,"LabAndNames");
	HX_MARK_MEMBER_NAME(backgroundcolor,"backgroundcolor");
	HX_MARK_MEMBER_NAME(backbutton,"backbutton");
	HX_MARK_MEMBER_NAME(colorsave,"colorsave");
	HX_MARK_MEMBER_NAME(oldcolorimput,"oldcolorimput");
	HX_MARK_MEMBER_NAME(oldcolorimput2,"oldcolorimput2");
	HX_MARK_MEMBER_NAME(color1,"color1");
	HX_MARK_MEMBER_NAME(color2,"color2");
	HX_MARK_MEMBER_NAME(color1_ARGB,"color1_ARGB");
	HX_MARK_MEMBER_NAME(color2_ARGB,"color2_ARGB");
	HX_MARK_MEMBER_NAME(pre_result,"pre_result");
	HX_MARK_MEMBER_NAME(fill,"fill");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(empty,"empty");
	HX_MARK_MEMBER_NAME(result,"result");
	HX_MARK_MEMBER_NAME(colorbar,"colorbar");
	HX_MARK_MEMBER_NAME(resultsquare,"resultsquare");
	HX_MARK_MEMBER_NAME(interractable_colorarray,"interractable_colorarray");
	HX_MARK_MEMBER_NAME(colorarray,"colorarray");
	HX_MARK_MEMBER_NAME(oldcolorarray,"oldcolorarray");
	HX_MARK_MEMBER_NAME(mixbutton,"mixbutton");
	HX_MARK_MEMBER_NAME(result_text,"result_text");
	HX_MARK_MEMBER_NAME(transformer,"transformer");
	HX_MARK_MEMBER_NAME(common_stepsize,"common_stepsize");
	HX_MARK_MEMBER_NAME(stepper_r1,"stepper_r1");
	HX_MARK_MEMBER_NAME(stepper_g1,"stepper_g1");
	HX_MARK_MEMBER_NAME(stepper_r2,"stepper_r2");
	HX_MARK_MEMBER_NAME(stepper_g2,"stepper_g2");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ManipulateColorsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(tabMenu,"tabMenu");
	HX_VISIT_MEMBER_NAME(LabAndNames,"LabAndNames");
	HX_VISIT_MEMBER_NAME(backgroundcolor,"backgroundcolor");
	HX_VISIT_MEMBER_NAME(backbutton,"backbutton");
	HX_VISIT_MEMBER_NAME(colorsave,"colorsave");
	HX_VISIT_MEMBER_NAME(oldcolorimput,"oldcolorimput");
	HX_VISIT_MEMBER_NAME(oldcolorimput2,"oldcolorimput2");
	HX_VISIT_MEMBER_NAME(color1,"color1");
	HX_VISIT_MEMBER_NAME(color2,"color2");
	HX_VISIT_MEMBER_NAME(color1_ARGB,"color1_ARGB");
	HX_VISIT_MEMBER_NAME(color2_ARGB,"color2_ARGB");
	HX_VISIT_MEMBER_NAME(pre_result,"pre_result");
	HX_VISIT_MEMBER_NAME(fill,"fill");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(empty,"empty");
	HX_VISIT_MEMBER_NAME(result,"result");
	HX_VISIT_MEMBER_NAME(colorbar,"colorbar");
	HX_VISIT_MEMBER_NAME(resultsquare,"resultsquare");
	HX_VISIT_MEMBER_NAME(interractable_colorarray,"interractable_colorarray");
	HX_VISIT_MEMBER_NAME(colorarray,"colorarray");
	HX_VISIT_MEMBER_NAME(oldcolorarray,"oldcolorarray");
	HX_VISIT_MEMBER_NAME(mixbutton,"mixbutton");
	HX_VISIT_MEMBER_NAME(result_text,"result_text");
	HX_VISIT_MEMBER_NAME(transformer,"transformer");
	HX_VISIT_MEMBER_NAME(common_stepsize,"common_stepsize");
	HX_VISIT_MEMBER_NAME(stepper_r1,"stepper_r1");
	HX_VISIT_MEMBER_NAME(stepper_g1,"stepper_g1");
	HX_VISIT_MEMBER_NAME(stepper_r2,"stepper_r2");
	HX_VISIT_MEMBER_NAME(stepper_g2,"stepper_g2");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ManipulateColorsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return ::hx::Val( fill ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { return ::hx::Val( empty ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"color1") ) { return ::hx::Val( color1 ); }
		if (HX_FIELD_EQ(inName,"color2") ) { return ::hx::Val( color2 ); }
		if (HX_FIELD_EQ(inName,"colors") ) { return ::hx::Val( colors ); }
		if (HX_FIELD_EQ(inName,"result") ) { return ::hx::Val( result ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tabMenu") ) { return ::hx::Val( tabMenu ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"colorbar") ) { return ::hx::Val( colorbar ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"colorsave") ) { return ::hx::Val( colorsave ); }
		if (HX_FIELD_EQ(inName,"mixbutton") ) { return ::hx::Val( mixbutton ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		if (HX_FIELD_EQ(inName,"backbutton") ) { return ::hx::Val( backbutton ); }
		if (HX_FIELD_EQ(inName,"pre_result") ) { return ::hx::Val( pre_result ); }
		if (HX_FIELD_EQ(inName,"colorarray") ) { return ::hx::Val( colorarray ); }
		if (HX_FIELD_EQ(inName,"stepper_r1") ) { return ::hx::Val( stepper_r1 ); }
		if (HX_FIELD_EQ(inName,"stepper_g1") ) { return ::hx::Val( stepper_g1 ); }
		if (HX_FIELD_EQ(inName,"stepper_r2") ) { return ::hx::Val( stepper_r2 ); }
		if (HX_FIELD_EQ(inName,"stepper_g2") ) { return ::hx::Val( stepper_g2 ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"LabAndNames") ) { return ::hx::Val( LabAndNames ); }
		if (HX_FIELD_EQ(inName,"color1_ARGB") ) { return ::hx::Val( color1_ARGB ); }
		if (HX_FIELD_EQ(inName,"color2_ARGB") ) { return ::hx::Val( color2_ARGB ); }
		if (HX_FIELD_EQ(inName,"result_text") ) { return ::hx::Val( result_text ); }
		if (HX_FIELD_EQ(inName,"transformer") ) { return ::hx::Val( transformer ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resultsquare") ) { return ::hx::Val( resultsquare ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"oldcolorimput") ) { return ::hx::Val( oldcolorimput ); }
		if (HX_FIELD_EQ(inName,"oldcolorarray") ) { return ::hx::Val( oldcolorarray ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"oldcolorimput2") ) { return ::hx::Val( oldcolorimput2 ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundcolor") ) { return ::hx::Val( backgroundcolor ); }
		if (HX_FIELD_EQ(inName,"common_stepsize") ) { return ::hx::Val( common_stepsize ); }
		if (HX_FIELD_EQ(inName,"addColorMixerUI") ) { return ::hx::Val( addColorMixerUI_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"interractable_colorarray") ) { return ::hx::Val( interractable_colorarray ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ManipulateColorsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { fill=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { empty=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"color1") ) { color1=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color2") ) { color2=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tabMenu") ) { tabMenu=inValue.Cast<  ::flixel::addons::ui::FlxUITabMenu >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"colorbar") ) { colorbar=inValue.Cast<  ::flixel::ui::FlxBar >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"colorsave") ) { colorsave=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mixbutton") ) { mixbutton=inValue.Cast<  ::flixel::addons::ui::FlxUIButton >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backbutton") ) { backbutton=inValue.Cast<  ::flixel::addons::ui::FlxUIButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_result") ) { pre_result=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorarray") ) { colorarray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepper_r1") ) { stepper_r1=inValue.Cast<  ::flixel::addons::ui::FlxUINumericStepper >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepper_g1") ) { stepper_g1=inValue.Cast<  ::flixel::addons::ui::FlxUINumericStepper >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepper_r2") ) { stepper_r2=inValue.Cast<  ::flixel::addons::ui::FlxUINumericStepper >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepper_g2") ) { stepper_g2=inValue.Cast<  ::flixel::addons::ui::FlxUINumericStepper >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"LabAndNames") ) { LabAndNames=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color1_ARGB") ) { color1_ARGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color2_ARGB") ) { color2_ARGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"result_text") ) { result_text=inValue.Cast<  ::flixel::addons::ui::FlxUIText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transformer") ) { transformer=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resultsquare") ) { resultsquare=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"oldcolorimput") ) { oldcolorimput=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oldcolorarray") ) { oldcolorarray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"oldcolorimput2") ) { oldcolorimput2=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundcolor") ) { backgroundcolor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"common_stepsize") ) { common_stepsize=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"interractable_colorarray") ) { interractable_colorarray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ManipulateColorsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("tabMenu",94,1a,cf,40));
	outFields->push(HX_("LabAndNames",be,8a,13,68));
	outFields->push(HX_("backgroundcolor",b5,de,19,7a));
	outFields->push(HX_("backbutton",59,d3,d5,e3));
	outFields->push(HX_("colorsave",20,ea,e1,3c));
	outFields->push(HX_("oldcolorimput",8f,c4,cd,a0));
	outFields->push(HX_("oldcolorimput2",c3,38,3e,13));
	outFields->push(HX_("color1",6e,c5,86,c6));
	outFields->push(HX_("color2",6f,c5,86,c6));
	outFields->push(HX_("color1_ARGB",fd,3c,57,fb));
	outFields->push(HX_("color2_ARGB",5c,99,b2,61));
	outFields->push(HX_("pre_result",b9,b4,f7,17));
	outFields->push(HX_("fill",83,ce,bb,43));
	outFields->push(HX_("colors",b0,c5,86,c6));
	outFields->push(HX_("empty",8d,3a,da,6f));
	outFields->push(HX_("result",dd,68,84,08));
	outFields->push(HX_("colorbar",50,00,fb,89));
	outFields->push(HX_("resultsquare",3a,ed,bb,3a));
	outFields->push(HX_("interractable_colorarray",5f,89,46,de));
	outFields->push(HX_("colorarray",56,15,ce,b6));
	outFields->push(HX_("oldcolorarray",bd,a4,e8,08));
	outFields->push(HX_("mixbutton",8e,90,6a,9e));
	outFields->push(HX_("result_text",8f,3e,6c,13));
	outFields->push(HX_("transformer",d9,b8,ca,32));
	outFields->push(HX_("common_stepsize",e1,22,96,34));
	outFields->push(HX_("stepper_r1",2d,35,36,f4));
	outFields->push(HX_("stepper_g1",98,2b,36,f4));
	outFields->push(HX_("stepper_r2",2e,35,36,f4));
	outFields->push(HX_("stepper_g2",99,2b,36,f4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ManipulateColorsState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(ManipulateColorsState_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUITabMenu */ ,(int)offsetof(ManipulateColorsState_obj,tabMenu),HX_("tabMenu",94,1a,cf,40)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ManipulateColorsState_obj,LabAndNames),HX_("LabAndNames",be,8a,13,68)},
	{::hx::fsInt,(int)offsetof(ManipulateColorsState_obj,backgroundcolor),HX_("backgroundcolor",b5,de,19,7a)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIButton */ ,(int)offsetof(ManipulateColorsState_obj,backbutton),HX_("backbutton",59,d3,d5,e3)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(ManipulateColorsState_obj,colorsave),HX_("colorsave",20,ea,e1,3c)},
	{::hx::fsString,(int)offsetof(ManipulateColorsState_obj,oldcolorimput),HX_("oldcolorimput",8f,c4,cd,a0)},
	{::hx::fsString,(int)offsetof(ManipulateColorsState_obj,oldcolorimput2),HX_("oldcolorimput2",c3,38,3e,13)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ManipulateColorsState_obj,color1),HX_("color1",6e,c5,86,c6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ManipulateColorsState_obj,color2),HX_("color2",6f,c5,86,c6)},
	{::hx::fsInt,(int)offsetof(ManipulateColorsState_obj,color1_ARGB),HX_("color1_ARGB",fd,3c,57,fb)},
	{::hx::fsInt,(int)offsetof(ManipulateColorsState_obj,color2_ARGB),HX_("color2_ARGB",5c,99,b2,61)},
	{::hx::fsInt,(int)offsetof(ManipulateColorsState_obj,pre_result),HX_("pre_result",b9,b4,f7,17)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(ManipulateColorsState_obj,fill),HX_("fill",83,ce,bb,43)},
	{::hx::fsString,(int)offsetof(ManipulateColorsState_obj,colors),HX_("colors",b0,c5,86,c6)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(ManipulateColorsState_obj,empty),HX_("empty",8d,3a,da,6f)},
	{::hx::fsInt,(int)offsetof(ManipulateColorsState_obj,result),HX_("result",dd,68,84,08)},
	{::hx::fsObject /*  ::flixel::ui::FlxBar */ ,(int)offsetof(ManipulateColorsState_obj,colorbar),HX_("colorbar",50,00,fb,89)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(ManipulateColorsState_obj,resultsquare),HX_("resultsquare",3a,ed,bb,3a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ManipulateColorsState_obj,interractable_colorarray),HX_("interractable_colorarray",5f,89,46,de)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ManipulateColorsState_obj,colorarray),HX_("colorarray",56,15,ce,b6)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ManipulateColorsState_obj,oldcolorarray),HX_("oldcolorarray",bd,a4,e8,08)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIButton */ ,(int)offsetof(ManipulateColorsState_obj,mixbutton),HX_("mixbutton",8e,90,6a,9e)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIText */ ,(int)offsetof(ManipulateColorsState_obj,result_text),HX_("result_text",8f,3e,6c,13)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ManipulateColorsState_obj,transformer),HX_("transformer",d9,b8,ca,32)},
	{::hx::fsInt,(int)offsetof(ManipulateColorsState_obj,common_stepsize),HX_("common_stepsize",e1,22,96,34)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUINumericStepper */ ,(int)offsetof(ManipulateColorsState_obj,stepper_r1),HX_("stepper_r1",2d,35,36,f4)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUINumericStepper */ ,(int)offsetof(ManipulateColorsState_obj,stepper_g1),HX_("stepper_g1",98,2b,36,f4)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUINumericStepper */ ,(int)offsetof(ManipulateColorsState_obj,stepper_r2),HX_("stepper_r2",2e,35,36,f4)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUINumericStepper */ ,(int)offsetof(ManipulateColorsState_obj,stepper_g2),HX_("stepper_g2",99,2b,36,f4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ManipulateColorsState_obj_sStaticStorageInfo = 0;
#endif

static ::String ManipulateColorsState_obj_sMemberFields[] = {
	HX_("background",ee,93,1d,26),
	HX_("tabMenu",94,1a,cf,40),
	HX_("LabAndNames",be,8a,13,68),
	HX_("backgroundcolor",b5,de,19,7a),
	HX_("backbutton",59,d3,d5,e3),
	HX_("colorsave",20,ea,e1,3c),
	HX_("create",fc,66,0f,7c),
	HX_("oldcolorimput",8f,c4,cd,a0),
	HX_("oldcolorimput2",c3,38,3e,13),
	HX_("color1",6e,c5,86,c6),
	HX_("color2",6f,c5,86,c6),
	HX_("color1_ARGB",fd,3c,57,fb),
	HX_("color2_ARGB",5c,99,b2,61),
	HX_("pre_result",b9,b4,f7,17),
	HX_("fill",83,ce,bb,43),
	HX_("colors",b0,c5,86,c6),
	HX_("empty",8d,3a,da,6f),
	HX_("result",dd,68,84,08),
	HX_("colorbar",50,00,fb,89),
	HX_("resultsquare",3a,ed,bb,3a),
	HX_("interractable_colorarray",5f,89,46,de),
	HX_("colorarray",56,15,ce,b6),
	HX_("oldcolorarray",bd,a4,e8,08),
	HX_("mixbutton",8e,90,6a,9e),
	HX_("result_text",8f,3e,6c,13),
	HX_("transformer",d9,b8,ca,32),
	HX_("common_stepsize",e1,22,96,34),
	HX_("stepper_r1",2d,35,36,f4),
	HX_("stepper_g1",98,2b,36,f4),
	HX_("stepper_r2",2e,35,36,f4),
	HX_("stepper_g2",99,2b,36,f4),
	HX_("addColorMixerUI",3b,cc,f1,ba),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class ManipulateColorsState_obj::__mClass;

void ManipulateColorsState_obj::__register()
{
	ManipulateColorsState_obj _hx_dummy;
	ManipulateColorsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ManipulateColorsState",c7,c2,97,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ManipulateColorsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ManipulateColorsState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ManipulateColorsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ManipulateColorsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

