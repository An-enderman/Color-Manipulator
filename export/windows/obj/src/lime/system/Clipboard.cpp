#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_21630ac4203d4998_25___update,"lime.system.Clipboard","__update",0x48c84c67,"lime.system.Clipboard.__update","lime/system/Clipboard.hx",25,0x9490b5ee)
HX_LOCAL_STACK_FRAME(_hx_pos_21630ac4203d4998_73_get_text,"lime.system.Clipboard","get_text",0xe647e374,"lime.system.Clipboard.get_text","lime/system/Clipboard.hx",73,0x9490b5ee)
HX_LOCAL_STACK_FRAME(_hx_pos_21630ac4203d4998_77_set_text,"lime.system.Clipboard","set_text",0x94a53ce8,"lime.system.Clipboard.set_text","lime/system/Clipboard.hx",77,0x9490b5ee)
HX_LOCAL_STACK_FRAME(_hx_pos_21630ac4203d4998_20_boot,"lime.system.Clipboard","boot",0x8554e870,"lime.system.Clipboard.boot","lime/system/Clipboard.hx",20,0x9490b5ee)
namespace lime{
namespace _hx_system{

void Clipboard_obj::__construct() { }

Dynamic Clipboard_obj::__CreateEmpty() { return new Clipboard_obj; }

void *Clipboard_obj::_hx_vtable = 0;

Dynamic Clipboard_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Clipboard_obj > _hx_result = new Clipboard_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Clipboard_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4d7fe0f2;
}

 ::lime::app::_Event_Void_Void Clipboard_obj::onUpdate;

::String Clipboard_obj::_text;

void Clipboard_obj::_hx___update(){
            	HX_STACKFRAME(&_hx_pos_21630ac4203d4998_25___update)
HXLINE(  26)		::String cacheText = ::lime::_hx_system::Clipboard_obj::_text;
HXLINE(  27)		::lime::_hx_system::Clipboard_obj::_text = null();
HXLINE(  37)		::lime::_hx_system::Clipboard_obj::_text = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_clipboard_get_text()) );
HXLINE(  46)		if ((::lime::_hx_system::Clipboard_obj::_text != cacheText)) {
HXLINE(  48)			::lime::_hx_system::Clipboard_obj::onUpdate->dispatch();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Clipboard_obj,_hx___update,(void))

::String Clipboard_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_21630ac4203d4998_73_get_text)
HXDLIN(  73)		return ::lime::_hx_system::Clipboard_obj::_text;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Clipboard_obj,get_text,return )

::String Clipboard_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_21630ac4203d4998_77_set_text)
HXLINE(  78)		::String cacheText = ::lime::_hx_system::Clipboard_obj::_text;
HXLINE(  79)		::lime::_hx_system::Clipboard_obj::_text = value;
HXLINE(  82)		::lime::_internal::backend::native::NativeCFFI_obj::lime_clipboard_set_text(value);
HXLINE(  93)		if ((::lime::_hx_system::Clipboard_obj::_text != cacheText)) {
HXLINE(  95)			::lime::_hx_system::Clipboard_obj::onUpdate->dispatch();
            		}
HXLINE(  98)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Clipboard_obj,set_text,return )


Clipboard_obj::Clipboard_obj()
{
}

bool Clipboard_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_text() ); return true; } }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { outValue = ( _text ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { outValue = ( onUpdate ); return true; }
		if (HX_FIELD_EQ(inName,"__update") ) { outValue = _hx___update_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_text") ) { outValue = get_text_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_text") ) { outValue = set_text_dyn(); return true; }
	}
	return false;
}

bool Clipboard_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_text(ioValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=ioValue.Cast< ::String >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=ioValue.Cast<  ::lime::app::_Event_Void_Void >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Clipboard_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Clipboard_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(void *) &Clipboard_obj::onUpdate,HX_("onUpdate",88,7c,b2,66)},
	{::hx::fsString,(void *) &Clipboard_obj::_text,HX_("_text",8c,e8,0a,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Clipboard_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Clipboard_obj::onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(Clipboard_obj::_text,"_text");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Clipboard_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Clipboard_obj::onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(Clipboard_obj::_text,"_text");
};

#endif

::hx::Class Clipboard_obj::__mClass;

static ::String Clipboard_obj_sStaticFields[] = {
	HX_("onUpdate",88,7c,b2,66),
	HX_("_text",8c,e8,0a,00),
	HX_("__update",29,f1,34,2f),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	::String(null())
};

void Clipboard_obj::__register()
{
	Clipboard_obj _hx_dummy;
	Clipboard_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system.Clipboard",f0,64,51,18);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Clipboard_obj::__GetStatic;
	__mClass->mSetStaticField = &Clipboard_obj::__SetStatic;
	__mClass->mMarkFunc = Clipboard_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Clipboard_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Clipboard_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Clipboard_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Clipboard_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Clipboard_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Clipboard_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_21630ac4203d4998_20_boot)
HXDLIN(  20)		onUpdate =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
            	}
}

} // end namespace lime
} // end namespace system
