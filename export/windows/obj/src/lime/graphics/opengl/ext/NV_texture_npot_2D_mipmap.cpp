#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_texture_npot_2D_mipmap
#include <lime/graphics/opengl/ext/NV_texture_npot_2D_mipmap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4e1ebca46ecf80ff_5_new,"lime.graphics.opengl.ext.NV_texture_npot_2D_mipmap","new",0xfe36a188,"lime.graphics.opengl.ext.NV_texture_npot_2D_mipmap.new","lime/graphics/opengl/ext/NV_texture_npot_2D_mipmap.hx",5,0x02359e8a)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void NV_texture_npot_2D_mipmap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4e1ebca46ecf80ff_5_new)
            	}

Dynamic NV_texture_npot_2D_mipmap_obj::__CreateEmpty() { return new NV_texture_npot_2D_mipmap_obj; }

void *NV_texture_npot_2D_mipmap_obj::_hx_vtable = 0;

Dynamic NV_texture_npot_2D_mipmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NV_texture_npot_2D_mipmap_obj > _hx_result = new NV_texture_npot_2D_mipmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NV_texture_npot_2D_mipmap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3943dc46;
}


NV_texture_npot_2D_mipmap_obj::NV_texture_npot_2D_mipmap_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NV_texture_npot_2D_mipmap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NV_texture_npot_2D_mipmap_obj_sStaticStorageInfo = 0;
#endif

::hx::Class NV_texture_npot_2D_mipmap_obj::__mClass;

void NV_texture_npot_2D_mipmap_obj::__register()
{
	NV_texture_npot_2D_mipmap_obj _hx_dummy;
	NV_texture_npot_2D_mipmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.NV_texture_npot_2D_mipmap",96,7d,5d,78);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NV_texture_npot_2D_mipmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NV_texture_npot_2D_mipmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NV_texture_npot_2D_mipmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
