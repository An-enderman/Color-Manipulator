#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_10_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",10,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_13_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",13,0xb30d7781)
static const int _hx_array_data_46c2835d_2[] = {
	(int)-3558991,
};
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_30_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",30,0xb30d7781)

void PlayState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_10_new)
HXDLIN(  10)		super::__construct(MaxSize);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x0a05f89d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_13_create)
HXLINE(  14)		this->super::create();
HXLINE(  15)		::Array< int > fill = ::Array_obj< int >::__new(0);
HXLINE(  16)		::String colors = null();
HXLINE(  17)		::Array< int > empty = ::Array_obj< int >::fromData( _hx_array_data_46c2835d_2,1);
HXLINE(  18)		int result = -1;
HXLINE(  19)		 ::flixel::FlxSprite resultsquare =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  20)		resultsquare->makeGraphic(100,100,result,null(),null());
HXLINE(  21)		{
HXLINE(  21)			int axes = 17;
HXDLIN(  21)			bool _hx_tmp;
HXDLIN(  21)			if ((axes != 1)) {
HXLINE(  21)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  21)				_hx_tmp = true;
            			}
HXDLIN(  21)			if (_hx_tmp) {
HXLINE(  21)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  21)				resultsquare->set_x(((( (Float)(_hx_tmp) ) - resultsquare->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  21)			bool _hx_tmp1;
HXDLIN(  21)			if ((axes != 16)) {
HXLINE(  21)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  21)				_hx_tmp1 = true;
            			}
HXDLIN(  21)			if (_hx_tmp1) {
HXLINE(  21)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  21)				resultsquare->set_y(((( (Float)(_hx_tmp) ) - resultsquare->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  22)		this->add(resultsquare);
HXLINE(  23)		Float resultsquare1 = resultsquare->x;
HXDLIN(  23)		Float resultsquare2 = resultsquare->y;
HXDLIN(  23)		 ::flixel::ui::FlxBar colorbar =  ::flixel::ui::FlxBar_obj::__alloc( HX_CTX ,resultsquare1,(resultsquare2 + resultsquare->get_height()),::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT_dyn(),100,10,::hx::ObjectPtr<OBJ_>(this),colors,0,2,null());
HXLINE(  24)		colorbar->createGradientBar(empty,fill,1,180,null(),null());
HXLINE(  25)		this->add(colorbar);
            	}


void PlayState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_30_update)
HXDLIN(  30)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PlayState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PlayState_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

