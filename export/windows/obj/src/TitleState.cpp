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
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
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
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a55214e0452daa02_15_new,"TitleState","new",0x3b23deeb,"TitleState.new","TitleState.hx",15,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_38_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",38,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_26_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",26,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_67_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",67,0xd132a6e5)

void TitleState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_15_new)
HXLINE(  23)		this->UN_LB_COLOR = -1;
HXLINE(  22)		this->UN_BUTTON_COLOR = -16744448;
HXLINE(  17)		this->backgroundcolor = -13290187;
HXLINE(  15)		super::__construct(MaxSize);
            	}

Dynamic TitleState_obj::__CreateEmpty() { return new TitleState_obj; }

void *TitleState_obj::_hx_vtable = 0;

Dynamic TitleState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TitleState_obj > _hx_result = new TitleState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TitleState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x22c6bd01) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x22c6bd01;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void TitleState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_38_create)
HXLINE(  38)			 ::flixel::FlxState nextState =  ::ManipulateColorsState_obj::__alloc( HX_CTX ,null());
HXDLIN(  38)			 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN(  38)			 ::Dynamic _hx_tmp = ::Reflect_obj::field(::flixel::FlxG_obj::game->_state,HX_("switchTo",8f,f8,d6,0d));
HXDLIN(  38)			if (( (bool)(_hx_tmp(nextState)) )) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxState,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_38_create)
HXLINE(  38)					if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXLINE(  38)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE(  38)				::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_26_create)
HXLINE(  27)		this->super::create();
HXLINE(  30)		this->background =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  31)		this->background->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,this->backgroundcolor,null(),null());
HXLINE(  32)		{
HXLINE(  32)			 ::flixel::FlxSprite _this = this->background;
HXDLIN(  32)			int axes = 17;
HXDLIN(  32)			bool _hx_tmp;
HXDLIN(  32)			if ((axes != 1)) {
HXLINE(  32)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  32)				_hx_tmp = true;
            			}
HXDLIN(  32)			if (_hx_tmp) {
HXLINE(  32)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  32)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  32)			bool _hx_tmp1;
HXDLIN(  32)			if ((axes != 16)) {
HXLINE(  32)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  32)				_hx_tmp1 = true;
            			}
HXDLIN(  32)			if (_hx_tmp1) {
HXLINE(  32)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  32)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  33)		this->add(this->background);
HXLINE(  36)		this->colormixerbutton =  ::flixel::addons::ui::FlxUIButton_obj::__alloc( HX_CTX ,0,70,HX_("manipulate colors",96,bb,86,02), ::Dynamic(new _hx_Closure_1()),null(),null(),null());
HXLINE(  40)		{
HXLINE(  40)			 ::flixel::addons::ui::FlxUIButton _this1 = this->colormixerbutton;
HXDLIN(  40)			int axes1 = 1;
HXDLIN(  40)			bool _hx_tmp2;
HXDLIN(  40)			if ((axes1 != 1)) {
HXLINE(  40)				_hx_tmp2 = (axes1 == 17);
            			}
            			else {
HXLINE(  40)				_hx_tmp2 = true;
            			}
HXDLIN(  40)			if (_hx_tmp2) {
HXLINE(  40)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  40)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  40)			bool _hx_tmp3;
HXDLIN(  40)			if ((axes1 != 16)) {
HXLINE(  40)				_hx_tmp3 = (axes1 == 17);
            			}
            			else {
HXLINE(  40)				_hx_tmp3 = true;
            			}
HXDLIN(  40)			if (_hx_tmp3) {
HXLINE(  40)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  40)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  41)		this->colormixerbutton->set_color(this->UN_BUTTON_COLOR);
HXLINE(  42)		( ( ::flixel::text::FlxText)(this->colormixerbutton->label) )->set_color(this->UN_LB_COLOR);
HXLINE(  43)		this->colormixerbutton->setGraphicSize(120,60);
HXLINE(  44)		this->add(this->colormixerbutton);
HXLINE(  47)		this->colorextractorbutton =  ::flixel::addons::ui::FlxUIButton_obj::__alloc( HX_CTX ,0,0,HX_("WIP",fe,43,42,00),null(),null(),null(),null());
HXLINE(  48)		this->colorextractorbutton->set_color(this->UN_BUTTON_COLOR);
HXLINE(  49)		( ( ::flixel::text::FlxText)(this->colorextractorbutton->label) )->set_color(this->UN_LB_COLOR);
HXLINE(  50)		{
HXLINE(  50)			 ::flixel::addons::ui::FlxUIButton _this2 = this->colorextractorbutton;
HXDLIN(  50)			int axes2 = 1;
HXDLIN(  50)			bool _hx_tmp4;
HXDLIN(  50)			if ((axes2 != 1)) {
HXLINE(  50)				_hx_tmp4 = (axes2 == 17);
            			}
            			else {
HXLINE(  50)				_hx_tmp4 = true;
            			}
HXDLIN(  50)			if (_hx_tmp4) {
HXLINE(  50)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  50)				_this2->set_x(((( (Float)(_hx_tmp) ) - _this2->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  50)			bool _hx_tmp5;
HXDLIN(  50)			if ((axes2 != 16)) {
HXLINE(  50)				_hx_tmp5 = (axes2 == 17);
            			}
            			else {
HXLINE(  50)				_hx_tmp5 = true;
            			}
HXDLIN(  50)			if (_hx_tmp5) {
HXLINE(  50)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  50)				_this2->set_y(((( (Float)(_hx_tmp) ) - _this2->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  51)		this->colorextractorbutton->setGraphicSize(120,60);
HXLINE(  52)		this->colorextractorbutton->set_y((this->colormixerbutton->y + 120));
HXLINE(  53)		this->add(this->colorextractorbutton);
HXLINE(  56)		this->colorinverterbutton =  ::flixel::addons::ui::FlxUIButton_obj::__alloc( HX_CTX ,0,0,HX_("WIP",fe,43,42,00),null(),null(),null(),null());
HXLINE(  57)		this->colorinverterbutton->set_color(this->UN_BUTTON_COLOR);
HXLINE(  58)		( ( ::flixel::text::FlxText)(this->colorinverterbutton->label) )->set_color(this->UN_LB_COLOR);
HXLINE(  59)		this->colorinverterbutton->setGraphicSize(120,60);
HXLINE(  60)		{
HXLINE(  60)			 ::flixel::addons::ui::FlxUIButton _this3 = this->colorinverterbutton;
HXDLIN(  60)			int axes3 = 1;
HXDLIN(  60)			bool _hx_tmp6;
HXDLIN(  60)			if ((axes3 != 1)) {
HXLINE(  60)				_hx_tmp6 = (axes3 == 17);
            			}
            			else {
HXLINE(  60)				_hx_tmp6 = true;
            			}
HXDLIN(  60)			if (_hx_tmp6) {
HXLINE(  60)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  60)				_this3->set_x(((( (Float)(_hx_tmp) ) - _this3->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  60)			bool _hx_tmp7;
HXDLIN(  60)			if ((axes3 != 16)) {
HXLINE(  60)				_hx_tmp7 = (axes3 == 17);
            			}
            			else {
HXLINE(  60)				_hx_tmp7 = true;
            			}
HXDLIN(  60)			if (_hx_tmp7) {
HXLINE(  60)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  60)				_this3->set_y(((( (Float)(_hx_tmp) ) - _this3->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  61)		this->colorinverterbutton->set_y((this->colorextractorbutton->y + 120));
HXLINE(  62)		this->add(this->colorinverterbutton);
            	}


void TitleState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_67_update)
HXDLIN(  67)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< TitleState_obj > TitleState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< TitleState_obj > __this = new TitleState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< TitleState_obj > TitleState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	TitleState_obj *__this = (TitleState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TitleState_obj), true, "TitleState"));
	*(void **)__this = TitleState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

TitleState_obj::TitleState_obj()
{
}

void TitleState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TitleState);
	HX_MARK_MEMBER_NAME(backgroundcolor,"backgroundcolor");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(colormixerbutton,"colormixerbutton");
	HX_MARK_MEMBER_NAME(colorextractorbutton,"colorextractorbutton");
	HX_MARK_MEMBER_NAME(colorinverterbutton,"colorinverterbutton");
	HX_MARK_MEMBER_NAME(UN_BUTTON_COLOR,"UN_BUTTON_COLOR");
	HX_MARK_MEMBER_NAME(UN_LB_COLOR,"UN_LB_COLOR");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TitleState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backgroundcolor,"backgroundcolor");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(colormixerbutton,"colormixerbutton");
	HX_VISIT_MEMBER_NAME(colorextractorbutton,"colorextractorbutton");
	HX_VISIT_MEMBER_NAME(colorinverterbutton,"colorinverterbutton");
	HX_VISIT_MEMBER_NAME(UN_BUTTON_COLOR,"UN_BUTTON_COLOR");
	HX_VISIT_MEMBER_NAME(UN_LB_COLOR,"UN_LB_COLOR");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TitleState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"UN_LB_COLOR") ) { return ::hx::Val( UN_LB_COLOR ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundcolor") ) { return ::hx::Val( backgroundcolor ); }
		if (HX_FIELD_EQ(inName,"UN_BUTTON_COLOR") ) { return ::hx::Val( UN_BUTTON_COLOR ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"colormixerbutton") ) { return ::hx::Val( colormixerbutton ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"colorinverterbutton") ) { return ::hx::Val( colorinverterbutton ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"colorextractorbutton") ) { return ::hx::Val( colorextractorbutton ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TitleState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"UN_LB_COLOR") ) { UN_LB_COLOR=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundcolor") ) { backgroundcolor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UN_BUTTON_COLOR") ) { UN_BUTTON_COLOR=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"colormixerbutton") ) { colormixerbutton=inValue.Cast<  ::flixel::addons::ui::FlxUIButton >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"colorinverterbutton") ) { colorinverterbutton=inValue.Cast<  ::flixel::addons::ui::FlxUIButton >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"colorextractorbutton") ) { colorextractorbutton=inValue.Cast<  ::flixel::addons::ui::FlxUIButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TitleState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("backgroundcolor",b5,de,19,7a));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("colormixerbutton",38,eb,4c,d5));
	outFields->push(HX_("colorextractorbutton",93,b3,ac,e3));
	outFields->push(HX_("colorinverterbutton",d8,2f,dc,ff));
	outFields->push(HX_("UN_BUTTON_COLOR",dc,04,f1,cd));
	outFields->push(HX_("UN_LB_COLOR",60,89,d4,1f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TitleState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TitleState_obj,backgroundcolor),HX_("backgroundcolor",b5,de,19,7a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIButton */ ,(int)offsetof(TitleState_obj,colormixerbutton),HX_("colormixerbutton",38,eb,4c,d5)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIButton */ ,(int)offsetof(TitleState_obj,colorextractorbutton),HX_("colorextractorbutton",93,b3,ac,e3)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIButton */ ,(int)offsetof(TitleState_obj,colorinverterbutton),HX_("colorinverterbutton",d8,2f,dc,ff)},
	{::hx::fsInt,(int)offsetof(TitleState_obj,UN_BUTTON_COLOR),HX_("UN_BUTTON_COLOR",dc,04,f1,cd)},
	{::hx::fsInt,(int)offsetof(TitleState_obj,UN_LB_COLOR),HX_("UN_LB_COLOR",60,89,d4,1f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TitleState_obj_sStaticStorageInfo = 0;
#endif

static ::String TitleState_obj_sMemberFields[] = {
	HX_("backgroundcolor",b5,de,19,7a),
	HX_("background",ee,93,1d,26),
	HX_("colormixerbutton",38,eb,4c,d5),
	HX_("colorextractorbutton",93,b3,ac,e3),
	HX_("colorinverterbutton",d8,2f,dc,ff),
	HX_("UN_BUTTON_COLOR",dc,04,f1,cd),
	HX_("UN_LB_COLOR",60,89,d4,1f),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class TitleState_obj::__mClass;

void TitleState_obj::__register()
{
	TitleState_obj _hx_dummy;
	TitleState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TitleState",79,8d,a1,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TitleState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TitleState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TitleState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TitleState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

