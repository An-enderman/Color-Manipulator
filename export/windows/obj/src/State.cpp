#include <hxcpp.h>

#ifndef INCLUDED_State
#include <State.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIInputText
#include <flixel/addons/ui/FlxUIInputText.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f6260b5df9bbdd67_14_new,"State","new",0xb85cd363,"State.new","State.hx",14,0x3913e96d)
static const int _hx_array_data_1738e5f1_1[] = {
	(int)-16777216,(int)-1,
};
static const int _hx_array_data_1738e5f1_2[] = {
	(int)-65536,(int)-16711936,(int)-16776961,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f6260b5df9bbdd67_22_create,"State","create",0xad45e7d9,"State.create","State.hx",22,0x3913e96d)
HX_LOCAL_STACK_FRAME(_hx_pos_f6260b5df9bbdd67_60_update,"State","update",0xb83c06e6,"State.update","State.hx",60,0x3913e96d)

void State_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_f6260b5df9bbdd67_14_new)
HXLINE(  19)		this->result = -8421505;
HXLINE(  18)		this->empty = ::Array_obj< int >::fromData( _hx_array_data_1738e5f1_1,2);
HXLINE(  17)		this->colors = HX_("1",31,00,00,00);
HXLINE(  16)		this->fill = ::Array_obj< int >::fromData( _hx_array_data_1738e5f1_2,3);
HXLINE(  14)		super::__construct(MaxSize);
            	}

Dynamic State_obj::__CreateEmpty() { return new State_obj; }

void *State_obj::_hx_vtable = 0;

Dynamic State_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< State_obj > _hx_result = new State_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool State_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x0b7d4f4d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b7d4f4d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void State_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_f6260b5df9bbdd67_22_create)
HXLINE(  23)		this->super::create();
HXLINE(  26)		 ::flixel::FlxSprite background =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  27)		background->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,this->result,null(),null());
HXLINE(  28)		{
HXLINE(  28)			int axes = 17;
HXDLIN(  28)			bool _hx_tmp;
HXDLIN(  28)			if ((axes != 1)) {
HXLINE(  28)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  28)				_hx_tmp = true;
            			}
HXDLIN(  28)			if (_hx_tmp) {
HXLINE(  28)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  28)				background->set_x(((( (Float)(_hx_tmp) ) - background->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  28)			bool _hx_tmp1;
HXDLIN(  28)			if ((axes != 16)) {
HXLINE(  28)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  28)				_hx_tmp1 = true;
            			}
HXDLIN(  28)			if (_hx_tmp1) {
HXLINE(  28)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  28)				background->set_y(((( (Float)(_hx_tmp) ) - background->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  29)		this->add(background);
HXLINE(  32)		 ::flixel::ui::FlxBar colorbar =  ::flixel::ui::FlxBar_obj::__alloc( HX_CTX ,((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )) - ( (Float)(55) )),((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) - ( (Float)(55) )),::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT_dyn(),120,120,::hx::ObjectPtr<OBJ_>(this),this->colors,0,1,null());
HXLINE(  33)		colorbar->createGradientBar(this->empty,this->fill,1,135,null(),null());
HXLINE(  34)		this->add(colorbar);
HXLINE(  37)		 ::flixel::FlxSprite resultsquare =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  38)		resultsquare->makeGraphic(100,100,this->result,null(),null());
HXLINE(  39)		resultsquare->set_x((colorbar->x + 10));
HXLINE(  40)		resultsquare->set_y((colorbar->y + 10));
HXLINE(  41)		this->add(resultsquare);
HXLINE(  44)		 ::flixel::addons::ui::FlxUIInputText colorimput =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,0,100,100,HX_("",00,00,00,00),10,null(),null(),null());
HXLINE(  45)		colorimput->set_x(( (Float)(20) ));
HXLINE(  46)		{
HXLINE(  46)			int axes1 = 16;
HXDLIN(  46)			bool _hx_tmp2;
HXDLIN(  46)			if ((axes1 != 1)) {
HXLINE(  46)				_hx_tmp2 = (axes1 == 17);
            			}
            			else {
HXLINE(  46)				_hx_tmp2 = true;
            			}
HXDLIN(  46)			if (_hx_tmp2) {
HXLINE(  46)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  46)				colorimput->set_x(((( (Float)(_hx_tmp) ) - colorimput->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  46)			bool _hx_tmp3;
HXDLIN(  46)			if ((axes1 != 16)) {
HXLINE(  46)				_hx_tmp3 = (axes1 == 17);
            			}
            			else {
HXLINE(  46)				_hx_tmp3 = true;
            			}
HXDLIN(  46)			if (_hx_tmp3) {
HXLINE(  46)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  46)				colorimput->set_y(((( (Float)(_hx_tmp) ) - colorimput->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  47)		this->add(colorimput);
HXLINE(  50)		 ::flixel::addons::ui::FlxUIButton plusbutton =  ::flixel::addons::ui::FlxUIButton_obj::__alloc( HX_CTX ,0,colorimput->y,HX_("+",2b,00,00,00),null(),null(),null(),null());
HXLINE(  51)		Float colorimput1 = colorimput->x;
HXDLIN(  51)		plusbutton->set_x((colorimput1 + colorimput->get_width()));
HXLINE(  52)		{
HXLINE(  52)			int axes2 = 16;
HXDLIN(  52)			bool _hx_tmp4;
HXDLIN(  52)			if ((axes2 != 1)) {
HXLINE(  52)				_hx_tmp4 = (axes2 == 17);
            			}
            			else {
HXLINE(  52)				_hx_tmp4 = true;
            			}
HXDLIN(  52)			if (_hx_tmp4) {
HXLINE(  52)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  52)				plusbutton->set_x(((( (Float)(_hx_tmp) ) - plusbutton->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  52)			bool _hx_tmp5;
HXDLIN(  52)			if ((axes2 != 16)) {
HXLINE(  52)				_hx_tmp5 = (axes2 == 17);
            			}
            			else {
HXLINE(  52)				_hx_tmp5 = true;
            			}
HXDLIN(  52)			if (_hx_tmp5) {
HXLINE(  52)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  52)				plusbutton->set_y(((( (Float)(_hx_tmp) ) - plusbutton->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  53)		plusbutton->set_color(-16744448);
HXLINE(  54)		plusbutton->setGraphicSize(12,12);
HXLINE(  55)		this->add(plusbutton);
            	}


void State_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_f6260b5df9bbdd67_60_update)
HXDLIN(  60)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< State_obj > State_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< State_obj > __this = new State_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< State_obj > State_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	State_obj *__this = (State_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(State_obj), true, "State"));
	*(void **)__this = State_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

State_obj::State_obj()
{
}

void State_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(State);
	HX_MARK_MEMBER_NAME(fill,"fill");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(empty,"empty");
	HX_MARK_MEMBER_NAME(result,"result");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void State_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fill,"fill");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(empty,"empty");
	HX_VISIT_MEMBER_NAME(result,"result");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val State_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return ::hx::Val( fill ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { return ::hx::Val( empty ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { return ::hx::Val( colors ); }
		if (HX_FIELD_EQ(inName,"result") ) { return ::hx::Val( result ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val State_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { fill=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { empty=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void State_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fill",83,ce,bb,43));
	outFields->push(HX_("colors",b0,c5,86,c6));
	outFields->push(HX_("empty",8d,3a,da,6f));
	outFields->push(HX_("result",dd,68,84,08));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo State_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(State_obj,fill),HX_("fill",83,ce,bb,43)},
	{::hx::fsString,(int)offsetof(State_obj,colors),HX_("colors",b0,c5,86,c6)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(State_obj,empty),HX_("empty",8d,3a,da,6f)},
	{::hx::fsInt,(int)offsetof(State_obj,result),HX_("result",dd,68,84,08)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *State_obj_sStaticStorageInfo = 0;
#endif

static ::String State_obj_sMemberFields[] = {
	HX_("fill",83,ce,bb,43),
	HX_("colors",b0,c5,86,c6),
	HX_("empty",8d,3a,da,6f),
	HX_("result",dd,68,84,08),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class State_obj::__mClass;

void State_obj::__register()
{
	State_obj _hx_dummy;
	State_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("State",f1,e5,38,17);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(State_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< State_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = State_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = State_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

