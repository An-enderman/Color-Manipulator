#ifndef INCLUDED_lime_text_Font
#define INCLUDED_lime_text_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,text,GlyphMetrics)

namespace lime{
namespace text{


class HXCPP_CLASS_ATTRIBUTES Font_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Font_obj OBJ_;
		Font_obj();

	public:
		enum { _hx_ClassId = 0x40cee131 };

		void __construct(::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.text.Font")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.text.Font"); }
		static ::hx::ObjectPtr< Font_obj > __new(::String name);
		static ::hx::ObjectPtr< Font_obj > __alloc(::hx::Ctx *_hx_ctx,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Font_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Font",ef,89,99,2e); }

		static  ::lime::text::Font fromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromBytes_dyn();

		static  ::lime::text::Font fromFile(::String path);
		static ::Dynamic fromFile_dyn();

		static  ::lime::app::Future loadFromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic loadFromBytes_dyn();

		static  ::lime::app::Future loadFromFile(::String path);
		static ::Dynamic loadFromFile_dyn();

		static  ::lime::app::Future loadFromName(::String path);
		static ::Dynamic loadFromName_dyn();

		int ascender;
		int descender;
		int height;
		::String name;
		int numGlyphs;
		 ::Dynamic src;
		int underlinePosition;
		int underlineThickness;
		int unitsPerEM;
		::String _hx___fontID;
		::String _hx___fontPath;
		::String _hx___fontPathWithoutDirectory;
		bool _hx___init;
		 ::Dynamic decompose();
		::Dynamic decompose_dyn();

		int getGlyph(::String character);
		::Dynamic getGlyph_dyn();

		::Array< int > getGlyphs(::String characters);
		::Dynamic getGlyphs_dyn();

		 ::lime::text::GlyphMetrics getGlyphMetrics(int glyph);
		::Dynamic getGlyphMetrics_dyn();

		 ::lime::graphics::Image renderGlyph(int glyph,int fontSize);
		::Dynamic renderGlyph_dyn();

		 ::haxe::ds::IntMap renderGlyphs(::Array< int > glyphs,int fontSize);
		::Dynamic renderGlyphs_dyn();

		void _hx___copyFrom( ::lime::text::Font other);
		::Dynamic _hx___copyFrom_dyn();

		void _hx___fromBytes( ::haxe::io::Bytes bytes);
		::Dynamic _hx___fromBytes_dyn();

		void _hx___fromFile(::String path);
		::Dynamic _hx___fromFile_dyn();

		void _hx___initializeSource();
		::Dynamic _hx___initializeSource_dyn();

		 ::lime::app::Future _hx___loadFromName(::String name);
		::Dynamic _hx___loadFromName_dyn();

		void _hx___setSize(int size);
		::Dynamic _hx___setSize_dyn();

};

} // end namespace lime
} // end namespace text

#endif /* INCLUDED_lime_text_Font */ 
