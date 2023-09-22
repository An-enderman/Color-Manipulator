#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#define INCLUDED_flixel_system_frontEnds_PluginFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouseEventManager)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,PluginFrontEnd)
HX_DECLARE_CLASS2(flixel,tweens,FlxTweenManager)
HX_DECLARE_CLASS2(flixel,util,FlxTimerManager)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace _hx_system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES PluginFrontEnd_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PluginFrontEnd_obj OBJ_;
		PluginFrontEnd_obj();

	public:
		enum { _hx_ClassId = 0x4da9793b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.frontEnds.PluginFrontEnd")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.frontEnds.PluginFrontEnd"); }
		static ::hx::ObjectPtr< PluginFrontEnd_obj > __new();
		static ::hx::ObjectPtr< PluginFrontEnd_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PluginFrontEnd_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PluginFrontEnd",a5,f8,8b,d8); }

		 ::flixel::input::mouse::FlxMouseEventManager add_flixel_input_mouse_FlxMouseEventManager( ::flixel::input::mouse::FlxMouseEventManager Plugin);
		::Dynamic add_flixel_input_mouse_FlxMouseEventManager_dyn();

		 ::flixel::tweens::FlxTweenManager add_flixel_tweens_FlxTweenManager( ::flixel::tweens::FlxTweenManager Plugin);
		::Dynamic add_flixel_tweens_FlxTweenManager_dyn();

		 ::flixel::util::FlxTimerManager add_flixel_util_FlxTimerManager( ::flixel::util::FlxTimerManager Plugin);
		::Dynamic add_flixel_util_FlxTimerManager_dyn();

		::Array< ::Dynamic> list;
		 ::Dynamic get(::hx::Class ClassType);
		::Dynamic get_dyn();

		 ::Dynamic remove( ::Dynamic Plugin);
		::Dynamic remove_dyn();

		bool removeType(::hx::Class ClassType);
		::Dynamic removeType_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

		void draw();
		::Dynamic draw_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_PluginFrontEnd */ 
