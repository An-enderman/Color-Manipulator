#include <hxcpp.h>

#ifndef INCLUDED_flixel_path_FlxPathDrawData
#include <flixel/path/FlxPathDrawData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ac1e30a014ff1e13_893_new,"flixel.path.FlxPathDrawData","new",0xd929d100,"flixel.path.FlxPathDrawData.new","flixel/path/FlxPath.hx",893,0xbf2b467e)
namespace flixel{
namespace path{

void FlxPathDrawData_obj::__construct( ::Dynamic lineColor, ::Dynamic nodeColor, ::Dynamic startColor, ::Dynamic endColor, ::Dynamic lineSize, ::Dynamic nodeSize, ::Dynamic startSize, ::Dynamic endSize){
            	HX_STACKFRAME(&_hx_pos_ac1e30a014ff1e13_893_new)
HXLINE( 902)		this->endSize = 5;
HXLINE( 901)		this->startSize = 5;
HXLINE( 900)		this->nodeSize = 3;
HXLINE( 899)		this->lineSize = 1;
HXLINE( 898)		this->endColor = -65536;
HXLINE( 897)		this->startColor = -16744448;
HXLINE( 896)		this->nodeColor = -1;
HXLINE( 895)		this->lineColor = -1;
HXLINE( 893)		if (::hx::IsNotNull( lineColor )) {
HXDLIN( 893)			this->lineColor = ( (int)(lineColor) );
            		}
HXDLIN( 893)		if (::hx::IsNotNull( nodeColor )) {
HXDLIN( 893)			this->nodeColor = ( (int)(nodeColor) );
            		}
HXDLIN( 893)		if (::hx::IsNotNull( startColor )) {
HXDLIN( 893)			this->startColor = ( (int)(startColor) );
            		}
HXDLIN( 893)		if (::hx::IsNotNull( endColor )) {
HXDLIN( 893)			this->endColor = ( (int)(endColor) );
            		}
HXDLIN( 893)		if (::hx::IsNotNull( lineSize )) {
HXDLIN( 893)			this->lineSize = ( (int)(lineSize) );
            		}
HXDLIN( 893)		if (::hx::IsNotNull( nodeSize )) {
HXDLIN( 893)			this->nodeSize = ( (int)(nodeSize) );
            		}
HXDLIN( 893)		if (::hx::IsNotNull( startSize )) {
HXDLIN( 893)			this->startSize = ( (int)(startSize) );
            		}
HXDLIN( 893)		if (::hx::IsNotNull( endSize )) {
HXDLIN( 893)			this->endSize = ( (int)(endSize) );
            		}
            	}

Dynamic FlxPathDrawData_obj::__CreateEmpty() { return new FlxPathDrawData_obj; }

void *FlxPathDrawData_obj::_hx_vtable = 0;

Dynamic FlxPathDrawData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxPathDrawData_obj > _hx_result = new FlxPathDrawData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool FlxPathDrawData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6f491424;
}


FlxPathDrawData_obj::FlxPathDrawData_obj()
{
}

::hx::Val FlxPathDrawData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"endSize") ) { return ::hx::Val( endSize ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endColor") ) { return ::hx::Val( endColor ); }
		if (HX_FIELD_EQ(inName,"lineSize") ) { return ::hx::Val( lineSize ); }
		if (HX_FIELD_EQ(inName,"nodeSize") ) { return ::hx::Val( nodeSize ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineColor") ) { return ::hx::Val( lineColor ); }
		if (HX_FIELD_EQ(inName,"nodeColor") ) { return ::hx::Val( nodeColor ); }
		if (HX_FIELD_EQ(inName,"startSize") ) { return ::hx::Val( startSize ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startColor") ) { return ::hx::Val( startColor ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxPathDrawData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"endSize") ) { endSize=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endColor") ) { endColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineSize") ) { lineSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nodeSize") ) { nodeSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineColor") ) { lineColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nodeColor") ) { nodeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startSize") ) { startSize=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startColor") ) { startColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPathDrawData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lineColor",cf,74,57,91));
	outFields->push(HX_("nodeColor",01,50,92,ee));
	outFields->push(HX_("startColor",a1,49,73,66));
	outFields->push(HX_("endColor",88,03,5a,48));
	outFields->push(HX_("lineSize",d5,ee,7c,89));
	outFields->push(HX_("nodeSize",e3,ff,d0,f5));
	outFields->push(HX_("startSize",43,1a,47,05));
	outFields->push(HX_("endSize",3c,5a,78,2e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxPathDrawData_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxPathDrawData_obj,lineColor),HX_("lineColor",cf,74,57,91)},
	{::hx::fsInt,(int)offsetof(FlxPathDrawData_obj,nodeColor),HX_("nodeColor",01,50,92,ee)},
	{::hx::fsInt,(int)offsetof(FlxPathDrawData_obj,startColor),HX_("startColor",a1,49,73,66)},
	{::hx::fsInt,(int)offsetof(FlxPathDrawData_obj,endColor),HX_("endColor",88,03,5a,48)},
	{::hx::fsInt,(int)offsetof(FlxPathDrawData_obj,lineSize),HX_("lineSize",d5,ee,7c,89)},
	{::hx::fsInt,(int)offsetof(FlxPathDrawData_obj,nodeSize),HX_("nodeSize",e3,ff,d0,f5)},
	{::hx::fsInt,(int)offsetof(FlxPathDrawData_obj,startSize),HX_("startSize",43,1a,47,05)},
	{::hx::fsInt,(int)offsetof(FlxPathDrawData_obj,endSize),HX_("endSize",3c,5a,78,2e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxPathDrawData_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxPathDrawData_obj_sMemberFields[] = {
	HX_("lineColor",cf,74,57,91),
	HX_("nodeColor",01,50,92,ee),
	HX_("startColor",a1,49,73,66),
	HX_("endColor",88,03,5a,48),
	HX_("lineSize",d5,ee,7c,89),
	HX_("nodeSize",e3,ff,d0,f5),
	HX_("startSize",43,1a,47,05),
	HX_("endSize",3c,5a,78,2e),
	::String(null()) };

::hx::Class FlxPathDrawData_obj::__mClass;

void FlxPathDrawData_obj::__register()
{
	FlxPathDrawData_obj _hx_dummy;
	FlxPathDrawData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.path.FlxPathDrawData",0e,91,35,d2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxPathDrawData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxPathDrawData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxPathDrawData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxPathDrawData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace path
