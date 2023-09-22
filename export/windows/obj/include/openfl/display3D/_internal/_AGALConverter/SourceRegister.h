#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_SourceRegister
#define INCLUDED_openfl_display3D__internal__AGALConverter_SourceRegister

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
HX_DECLARE_CLASS4(openfl,display3D,_internal,_AGALConverter,ProgramType)
HX_DECLARE_CLASS4(openfl,display3D,_internal,_AGALConverter,SourceRegister)

namespace openfl{
namespace display3D{
namespace _internal{
namespace _AGALConverter{


class HXCPP_CLASS_ATTRIBUTES SourceRegister_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SourceRegister_obj OBJ_;
		SourceRegister_obj();

	public:
		enum { _hx_ClassId = 0x5dd77f8b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D._internal._AGALConverter.SourceRegister")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display3D._internal._AGALConverter.SourceRegister"); }
		static ::hx::ObjectPtr< SourceRegister_obj > __new();
		static ::hx::ObjectPtr< SourceRegister_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SourceRegister_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SourceRegister",7e,7a,8d,0c); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::openfl::display3D::_internal::_AGALConverter::SourceRegister parse( cpp::Int64Struct v, ::openfl::display3D::_internal::_AGALConverter::ProgramType programType,int sourceMask);
		static ::Dynamic parse_dyn();

		int d;
		int itype;
		int n;
		int o;
		 ::openfl::display3D::_internal::_AGALConverter::ProgramType programType;
		int q;
		int s;
		int sourceMask;
		int type;
		::String toGLSL(::hx::Null< bool >  emitSwizzle,::hx::Null< int >  offset);
		::Dynamic toGLSL_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl_display3D__internal__AGALConverter_SourceRegister */ 
