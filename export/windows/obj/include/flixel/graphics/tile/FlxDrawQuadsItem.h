#ifndef INCLUDED_flixel_graphics_tile_FlxDrawQuadsItem
#define INCLUDED_flixel_graphics_tile_FlxDrawQuadsItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawBaseItem)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawQuadsItem)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Bool)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace flixel{
namespace graphics{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxDrawQuadsItem_obj : public  ::flixel::graphics::tile::FlxDrawBaseItem_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxDrawBaseItem_obj super;
		typedef FlxDrawQuadsItem_obj OBJ_;
		FlxDrawQuadsItem_obj();

	public:
		enum { _hx_ClassId = 0x4a99e57e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.tile.FlxDrawQuadsItem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.graphics.tile.FlxDrawQuadsItem"); }
		static ::hx::ObjectPtr< FlxDrawQuadsItem_obj > __new();
		static ::hx::ObjectPtr< FlxDrawQuadsItem_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxDrawQuadsItem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxDrawQuadsItem",a9,58,46,9f); }

		static void __boot();
		static int VERTICES_PER_QUAD;
		 ::flixel::graphics::tile::FlxGraphicsShader shader;
		 ::openfl::_Vector::FloatVector rects;
		 ::openfl::_Vector::FloatVector transforms;
		::Array< Float > alphas;
		::Array< Float > colorMultipliers;
		::Array< Float > colorOffsets;
		void reset();

		void dispose();

		void addQuad( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxMatrix matrix, ::openfl::geom::ColorTransform transform);

		void render( ::flixel::FlxCamera camera);

		void setParameterValue( ::openfl::display::ShaderParameter_Bool parameter,bool value);
		::Dynamic setParameterValue_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace tile

#endif /* INCLUDED_flixel_graphics_tile_FlxDrawQuadsItem */ 
