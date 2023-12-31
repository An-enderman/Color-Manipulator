#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system__FlxAssets_FlxJsonAsset_Impl_
#include <flixel/system/_FlxAssets/FlxJsonAsset_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system__FlxAssets_FlxXmlAsset_Impl_
#include <flixel/system/_FlxAssets/FlxXmlAsset_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxBasePoint
#include <flixel/util/FlxPool_flixel_math_FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasAttribAccess_Impl_
#include <haxe/xml/_Access/HasAttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeListAccess_Impl_
#include <haxe/xml/_Access/NodeListAccess_Impl_.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d294561f5bda5770_23_new,"flixel.graphics.frames.FlxAtlasFrames","new",0xed20cbc8,"flixel.graphics.frames.FlxAtlasFrames.new","flixel/graphics/frames/FlxAtlasFrames.hx",23,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_402_addBorder,"flixel.graphics.frames.FlxAtlasFrames","addBorder",0x1a31fb55,"flixel.graphics.frames.FlxAtlasFrames.addBorder","flixel/graphics/frames/FlxAtlasFrames.hx",402,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_41_fromAseprite,"flixel.graphics.frames.FlxAtlasFrames","fromAseprite",0x606b9867,"flixel.graphics.frames.FlxAtlasFrames.fromAseprite","flixel/graphics/frames/FlxAtlasFrames.hx",41,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_57_fromTexturePackerJson,"flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerJson",0xae76e627,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerJson","flixel/graphics/frames/FlxAtlasFrames.hx",57,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_102_texturePackerHelper,"flixel.graphics.frames.FlxAtlasFrames","texturePackerHelper",0x397d6e77,"flixel.graphics.frames.FlxAtlasFrames.texturePackerHelper","flixel/graphics/frames/FlxAtlasFrames.hx",102,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_134_fromLibGdx,"flixel.graphics.frames.FlxAtlasFrames","fromLibGdx",0x5ef5c818,"flixel.graphics.frames.FlxAtlasFrames.fromLibGdx","flixel/graphics/frames/FlxAtlasFrames.hx",134,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_213_getDimensions,"flixel.graphics.frames.FlxAtlasFrames","getDimensions",0x0a6267eb,"flixel.graphics.frames.FlxAtlasFrames.getDimensions","flixel/graphics/frames/FlxAtlasFrames.hx",213,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_233_fromSparrow,"flixel.graphics.frames.FlxAtlasFrames","fromSparrow",0x30bf432a,"flixel.graphics.frames.FlxAtlasFrames.fromSparrow","flixel/graphics/frames/FlxAtlasFrames.hx",233,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_293_fromTexturePackerXml,"flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerXml",0x5ca98eb8,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerXml","flixel/graphics/frames/FlxAtlasFrames.hx",293,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_342_fromSpriteSheetPacker,"flixel.graphics.frames.FlxAtlasFrames","fromSpriteSheetPacker",0x4fb8a81e,"flixel.graphics.frames.FlxAtlasFrames.fromSpriteSheetPacker","flixel/graphics/frames/FlxAtlasFrames.hx",342,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_388_findFrame,"flixel.graphics.frames.FlxAtlasFrames","findFrame",0xf36e229c,"flixel.graphics.frames.FlxAtlasFrames.findFrame","flixel/graphics/frames/FlxAtlasFrames.hx",388,0x501ecb67)
namespace flixel{
namespace graphics{
namespace frames{

void FlxAtlasFrames_obj::__construct( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_23_new)
HXDLIN(  23)		super::__construct(parent,::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS_dyn(),border);
            	}

Dynamic FlxAtlasFrames_obj::__CreateEmpty() { return new FlxAtlasFrames_obj; }

void *FlxAtlasFrames_obj::_hx_vtable = 0;

Dynamic FlxAtlasFrames_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAtlasFrames_obj > _hx_result = new FlxAtlasFrames_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxAtlasFrames_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ee6bdec) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1ee6bdec;
	} else {
		return inClassId==(int)0x7907b929;
	}
}

 ::flixel::graphics::frames::FlxFramesCollection FlxAtlasFrames_obj::addBorder( ::flixel::math::FlxBasePoint border){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_402_addBorder)
HXLINE( 403)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 403)		point->_inPool = false;
HXDLIN( 403)		 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 403)		point1->_weak = true;
HXDLIN( 403)		 ::flixel::math::FlxBasePoint this1 = point1;
HXDLIN( 403)		 ::flixel::math::FlxBasePoint point2 = this->border;
HXDLIN( 403)		{
HXLINE( 403)			Float y = point2->y;
HXDLIN( 403)			this1->set_x((this1->x + point2->x));
HXDLIN( 403)			this1->set_y((this1->y + y));
            		}
HXDLIN( 403)		if (point2->_weak) {
HXLINE( 403)			point2->put();
            		}
HXDLIN( 403)		 ::flixel::math::FlxBasePoint this2 = this1;
HXDLIN( 403)		{
HXLINE( 403)			Float y1 = border->y;
HXDLIN( 403)			this2->set_x((this2->x + border->x));
HXDLIN( 403)			this2->set_y((this2->y + y1));
            		}
HXDLIN( 403)		if (border->_weak) {
HXLINE( 403)			border->put();
            		}
HXDLIN( 403)		 ::flixel::math::FlxBasePoint resultBorder = this2;
HXLINE( 404)		 ::flixel::graphics::frames::FlxAtlasFrames atlasFrames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(this->parent,resultBorder);
HXLINE( 405)		if (::hx::IsNotNull( atlasFrames )) {
HXLINE( 406)			return atlasFrames;
            		}
HXLINE( 408)		atlasFrames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,this->parent,resultBorder);
HXLINE( 410)		{
HXLINE( 410)			int _g = 0;
HXDLIN( 410)			::Array< ::Dynamic> _g1 = this->frames;
HXDLIN( 410)			while((_g < _g1->length)){
HXLINE( 410)				 ::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 410)				_g = (_g + 1);
HXLINE( 411)				atlasFrames->pushFrame(frame->setBorderTo(border,null()));
            			}
            		}
HXLINE( 413)		return atlasFrames;
            	}


 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromAseprite( ::Dynamic source, ::Dynamic description){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_41_fromAseprite)
HXDLIN(  41)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromTexturePackerJson(source,description,true);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromAseprite,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerJson( ::Dynamic source, ::Dynamic description,::hx::Null< bool >  __o_useFrameDuration){
            		bool useFrameDuration = __o_useFrameDuration.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_57_fromTexturePackerJson)
HXLINE(  58)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,false,null());
HXLINE(  59)		if (::hx::IsNull( graphic )) {
HXLINE(  60)			return null();
            		}
HXLINE(  63)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE(  64)		if (::hx::IsNotNull( frames )) {
HXLINE(  65)			return frames;
            		}
HXLINE(  67)		bool _hx_tmp;
HXDLIN(  67)		if (::hx::IsNotNull( graphic )) {
HXLINE(  67)			_hx_tmp = ::hx::IsNull( description );
            		}
            		else {
HXLINE(  67)			_hx_tmp = true;
            		}
HXDLIN(  67)		if (_hx_tmp) {
HXLINE(  68)			return null();
            		}
HXLINE(  70)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE(  72)		 ::Dynamic data = ::flixel::_hx_system::_FlxAssets::FlxJsonAsset_Impl__obj::getData(description);
HXLINE(  75)		if (::Std_obj::isOfType( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic)),::hx::ArrayBase::__mClass)) {
HXLINE(  77)			int _g = 0;
HXDLIN(  77)			::Array< ::Dynamic> _g1 = ::Lambda_obj::array(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic));
HXDLIN(  77)			while((_g < _g1->length)){
HXLINE(  77)				 ::Dynamic frame = _g1->__get(_g);
HXDLIN(  77)				_g = (_g + 1);
HXLINE(  79)				::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(( (::String)(frame->__Field(HX_("filename",c7,2e,6a,77),::hx::paccDynamic)) ),frame,frames,useFrameDuration);
            			}
            		}
            		else {
HXLINE(  85)			int _g = 0;
HXDLIN(  85)			::Array< ::String > _g1 = ::Reflect_obj::fields( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic)));
HXDLIN(  85)			while((_g < _g1->length)){
HXLINE(  85)				::String frameName = _g1->__get(_g);
HXDLIN(  85)				_g = (_g + 1);
HXLINE(  87)				::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(frameName,::Reflect_obj::field( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic)),frameName),frames,useFrameDuration);
            			}
            		}
HXLINE(  91)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAtlasFrames_obj,fromTexturePackerJson,return )

void FlxAtlasFrames_obj::texturePackerHelper(::String frameName, ::Dynamic frameData, ::flixel::graphics::frames::FlxAtlasFrames frames,::hx::Null< bool >  __o_useFrameDuration){
            		bool useFrameDuration = __o_useFrameDuration.Default(false);
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_102_texturePackerHelper)
HXLINE( 103)		bool rotated = ( (bool)(frameData->__Field(HX_("rotated",a9,49,1d,f1),::hx::paccDynamic)) );
HXLINE( 104)		int angle = 0;
HXLINE( 105)		 ::flixel::math::FlxRect frameRect = null();
HXLINE( 107)		 ::Dynamic frame = frameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic);
HXLINE( 108)		if (rotated) {
HXLINE( 110)			Float X = ( (Float)(frame->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 110)			Float Y = ( (Float)(frame->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 110)			Float Width = ( (Float)(frame->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) );
HXDLIN( 110)			Float Height = ( (Float)(frame->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) );
HXDLIN( 110)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 110)			_this->x = X;
HXDLIN( 110)			_this->y = Y;
HXDLIN( 110)			_this->width = Width;
HXDLIN( 110)			_this->height = Height;
HXDLIN( 110)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 110)			rect->_inPool = false;
HXDLIN( 110)			frameRect = rect;
HXLINE( 111)			angle = -90;
            		}
            		else {
HXLINE( 115)			Float X = ( (Float)(frame->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 115)			Float Y = ( (Float)(frame->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 115)			Float Width = ( (Float)(frame->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) );
HXDLIN( 115)			Float Height = ( (Float)(frame->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) );
HXDLIN( 115)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 115)			_this->x = X;
HXDLIN( 115)			_this->y = Y;
HXDLIN( 115)			_this->width = Width;
HXDLIN( 115)			_this->height = Height;
HXDLIN( 115)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 115)			rect->_inPool = false;
HXDLIN( 115)			frameRect = rect;
            		}
HXLINE( 118)		Float x = ( (Float)( ::Dynamic(frameData->__Field(HX_("sourceSize",3c,87,b7,74),::hx::paccDynamic))->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) );
HXDLIN( 118)		Float y = ( (Float)( ::Dynamic(frameData->__Field(HX_("sourceSize",3c,87,b7,74),::hx::paccDynamic))->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) );
HXDLIN( 118)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 118)		point->_inPool = false;
HXDLIN( 118)		 ::flixel::math::FlxBasePoint sourceSize = point;
HXLINE( 119)		Float x1 = ( (Float)( ::Dynamic(frameData->__Field(HX_("spriteSourceSize",a1,7f,c1,03),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 119)		Float y1 = ( (Float)( ::Dynamic(frameData->__Field(HX_("spriteSourceSize",a1,7f,c1,03),::hx::paccDynamic))->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 119)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x1,y1);
HXDLIN( 119)		point1->_inPool = false;
HXDLIN( 119)		 ::flixel::math::FlxBasePoint offset = point1;
HXLINE( 120)		Float duration;
HXDLIN( 120)		bool duration1;
HXDLIN( 120)		if (useFrameDuration) {
HXLINE( 120)			duration1 = ::hx::IsNotNull( frameData->__Field(HX_("duration",54,0f,8e,14),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 120)			duration1 = false;
            		}
HXDLIN( 120)		if (duration1) {
HXLINE( 120)			duration = (( (Float)(frameData->__Field(HX_("duration",54,0f,8e,14),::hx::paccDynamic)) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 120)			duration = ( (Float)(0) );
            		}
HXLINE( 121)		frames->addAtlasFrame(frameRect,sourceSize,offset,frameName,angle,false,false,duration);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxAtlasFrames_obj,texturePackerHelper,(void))

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromLibGdx( ::Dynamic source,::String description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_134_fromLibGdx)
HXLINE( 135)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,null(),null());
HXLINE( 136)		if (::hx::IsNull( graphic )) {
HXLINE( 137)			return null();
            		}
HXLINE( 140)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 141)		if (::hx::IsNotNull( frames )) {
HXLINE( 142)			return frames;
            		}
HXLINE( 144)		bool _hx_tmp;
HXDLIN( 144)		if (::hx::IsNotNull( graphic )) {
HXLINE( 144)			_hx_tmp = ::hx::IsNull( description );
            		}
            		else {
HXLINE( 144)			_hx_tmp = true;
            		}
HXDLIN( 144)		if (_hx_tmp) {
HXLINE( 145)			return null();
            		}
HXLINE( 147)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 149)		if (::openfl::utils::Assets_obj::exists(description,null())) {
HXLINE( 150)			description = ::openfl::utils::Assets_obj::getText(description);
            		}
HXLINE( 152)		::String pack = ::StringTools_obj::trim(description);
HXLINE( 153)		::Array< ::String > lines = pack.split(HX_("\n",0a,00,00,00));
HXLINE( 156)		int repeatLine;
HXDLIN( 156)		if ((lines->__get(3).indexOf(HX_("repeat:",7f,d8,87,a6),null()) > -1)) {
HXLINE( 156)			repeatLine = 3;
            		}
            		else {
HXLINE( 156)			repeatLine = 4;
            		}
HXLINE( 157)		lines->removeRange(0,(repeatLine + 1));
HXLINE( 159)		int numElementsPerImage = 7;
HXLINE( 160)		int numImages = ::Std_obj::_hx_int((( (Float)(lines->length) ) / ( (Float)(numElementsPerImage) )));
HXLINE( 162)		{
HXLINE( 162)			int _g = 0;
HXDLIN( 162)			int _g1 = numImages;
HXDLIN( 162)			while((_g < _g1)){
HXLINE( 162)				_g = (_g + 1);
HXDLIN( 162)				int i = (_g - 1);
HXLINE( 164)				int curIndex = (i * numElementsPerImage);
HXLINE( 166)				curIndex = (curIndex + 1);
HXDLIN( 166)				::String name = lines->__get((curIndex - 1));
HXLINE( 167)				curIndex = (curIndex + 1);
HXDLIN( 167)				bool rotated = (lines->__get((curIndex - 1)).indexOf(HX_("true",4e,a7,03,4d),null()) >= 0);
HXLINE( 168)				int angle;
HXDLIN( 168)				if (rotated) {
HXLINE( 168)					angle = 90;
            				}
            				else {
HXLINE( 168)					angle = 0;
            				}
HXLINE( 170)				curIndex = (curIndex + 1);
HXDLIN( 170)				::String tempString = lines->__get((curIndex - 1));
HXLINE( 171)				 ::Dynamic size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 173)				int imageX = ( (int)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXLINE( 174)				int imageY = ( (int)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXLINE( 176)				curIndex = (curIndex + 1);
HXDLIN( 176)				tempString = lines->__get((curIndex - 1));
HXLINE( 177)				size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 179)				int imageWidth = ( (int)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXLINE( 180)				int imageHeight = ( (int)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXLINE( 182)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 182)				_this->x = ( (Float)(imageX) );
HXDLIN( 182)				_this->y = ( (Float)(imageY) );
HXDLIN( 182)				_this->width = ( (Float)(imageWidth) );
HXDLIN( 182)				_this->height = ( (Float)(imageHeight) );
HXDLIN( 182)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 182)				rect->_inPool = false;
HXDLIN( 182)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 184)				curIndex = (curIndex + 1);
HXDLIN( 184)				tempString = lines->__get((curIndex - 1));
HXLINE( 185)				size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 187)				Float x = ( (Float)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 187)				Float y = ( (Float)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 187)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 187)				point->_inPool = false;
HXDLIN( 187)				 ::flixel::math::FlxBasePoint sourceSize = point;
HXLINE( 189)				curIndex = (curIndex + 1);
HXDLIN( 189)				tempString = lines->__get((curIndex - 1));
HXLINE( 190)				size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 192)				curIndex = (curIndex + 1);
HXDLIN( 192)				tempString = lines->__get((curIndex - 1));
HXLINE( 193)				 ::Dynamic index = ::Std_obj::parseInt(tempString.split(HX_(":",3a,00,00,00))->__get(1));
HXLINE( 195)				if (::hx::IsNotEq( index,-1 )) {
HXLINE( 196)					name = (name + (HX_("_",5f,00,00,00) + index));
            				}
HXLINE( 202)				Float x1 = ( (Float)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 202)				Float y1 = ((sourceSize->y - ( (Float)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) )) - ( (Float)(imageHeight) ));
HXDLIN( 202)				 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x1,y1);
HXDLIN( 202)				point1->_inPool = false;
HXDLIN( 202)				 ::flixel::math::FlxBasePoint offset = point1;
HXLINE( 203)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,null(),null(),null());
            			}
            		}
HXLINE( 206)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromLibGdx,return )

 ::Dynamic FlxAtlasFrames_obj::getDimensions(::String line){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_213_getDimensions)
HXLINE( 214)		int colonPosition = line.indexOf(HX_(":",3a,00,00,00),null());
HXLINE( 215)		int comaPosition = line.indexOf(HX_(",",2c,00,00,00),null());
HXLINE( 218)		 ::Dynamic _hx_tmp = ::Std_obj::parseInt(line.substring((colonPosition + 1),comaPosition));
HXLINE( 217)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),_hx_tmp)
            			->setFixed(1,HX_("y",79,00,00,00),::Std_obj::parseInt(line.substring((comaPosition + 1),line.length))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAtlasFrames_obj,getDimensions,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSparrow( ::Dynamic source, ::Dynamic xml){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_233_fromSparrow)
HXLINE( 234)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,null(),null());
HXLINE( 235)		if (::hx::IsNull( graphic )) {
HXLINE( 236)			return null();
            		}
HXLINE( 238)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 239)		if (::hx::IsNotNull( frames )) {
HXLINE( 240)			return frames;
            		}
HXLINE( 242)		bool _hx_tmp;
HXDLIN( 242)		if (::hx::IsNotNull( graphic )) {
HXLINE( 242)			_hx_tmp = ::hx::IsNull( xml );
            		}
            		else {
HXLINE( 242)			_hx_tmp = true;
            		}
HXDLIN( 242)		if (_hx_tmp) {
HXLINE( 243)			return null();
            		}
HXLINE( 245)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 247)		 ::Xml x = ::flixel::_hx_system::_FlxAssets::FlxXmlAsset_Impl__obj::getXml(xml)->firstElement();
HXDLIN( 247)		bool _hx_tmp1;
HXDLIN( 247)		if ((x->nodeType != ::Xml_obj::Document)) {
HXLINE( 247)			_hx_tmp1 = (x->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE( 247)			_hx_tmp1 = false;
            		}
HXDLIN( 247)		if (_hx_tmp1) {
HXLINE( 247)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(x->nodeType))));
            		}
HXDLIN( 247)		 ::Xml this1 = x;
HXDLIN( 247)		 ::Xml data = this1;
HXLINE( 249)		{
HXLINE( 249)			int _g = 0;
HXDLIN( 249)			::Array< ::Dynamic> _g1 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(data,HX_("SubTexture",5b,7b,fb,11));
HXDLIN( 249)			while((_g < _g1->length)){
HXLINE( 249)				 ::Xml texture = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN( 249)				_g = (_g + 1);
HXLINE( 251)				::String name = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("name",4b,72,ff,48));
HXLINE( 252)				bool trimmed = ::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("frameX",8b,af,85,ac));
HXLINE( 253)				bool rotated;
HXDLIN( 253)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("rotated",a9,49,1d,f1))) {
HXLINE( 253)					rotated = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("rotated",a9,49,1d,f1)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 253)					rotated = false;
            				}
HXLINE( 254)				bool flipX;
HXDLIN( 254)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("flipX",0b,45,92,02))) {
HXLINE( 254)					flipX = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("flipX",0b,45,92,02)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 254)					flipX = false;
            				}
HXLINE( 255)				bool flipY;
HXDLIN( 255)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("flipY",0c,45,92,02))) {
HXLINE( 255)					flipY = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("flipY",0c,45,92,02)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 255)					flipY = false;
            				}
HXLINE( 257)				Float X = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("x",78,00,00,00)));
HXDLIN( 257)				Float Y = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("y",79,00,00,00)));
HXDLIN( 257)				Float Width = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("width",06,b6,62,ca)));
HXDLIN( 257)				Float Height = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("height",e7,07,4c,02)));
HXDLIN( 257)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 257)				_this->x = X;
HXDLIN( 257)				_this->y = Y;
HXDLIN( 257)				_this->width = Width;
HXDLIN( 257)				_this->height = Height;
HXDLIN( 257)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 257)				rect->_inPool = false;
HXDLIN( 257)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 260)				 ::openfl::geom::Rectangle size;
HXDLIN( 260)				if (trimmed) {
HXLINE( 262)					 ::Dynamic size1 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameX",8b,af,85,ac)));
HXDLIN( 262)					 ::Dynamic size2 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameY",8c,af,85,ac)));
HXDLIN( 262)					 ::Dynamic size3 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameWidth",99,ea,88,ad)));
HXLINE( 260)					size =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,size1,size2,size3,::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameHeight",f4,d3,93,e0))));
            				}
            				else {
HXLINE( 260)					size =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,rect1->width,rect1->height);
            				}
HXLINE( 270)				int angle;
HXDLIN( 270)				if (rotated) {
HXLINE( 270)					angle = -90;
            				}
            				else {
HXLINE( 270)					angle = 0;
            				}
HXLINE( 272)				Float x = -(size->get_left());
HXDLIN( 272)				Float y = -(size->get_top());
HXDLIN( 272)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 272)				point->_inPool = false;
HXDLIN( 272)				 ::flixel::math::FlxBasePoint offset = point;
HXLINE( 273)				Float x1 = size->width;
HXDLIN( 273)				Float y1 = size->height;
HXDLIN( 273)				 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x1,y1);
HXDLIN( 273)				point1->_inPool = false;
HXDLIN( 273)				 ::flixel::math::FlxBasePoint sourceSize = point1;
HXLINE( 275)				bool _hx_tmp;
HXDLIN( 275)				if (rotated) {
HXLINE( 275)					_hx_tmp = !(trimmed);
            				}
            				else {
HXLINE( 275)					_hx_tmp = false;
            				}
HXDLIN( 275)				if (_hx_tmp) {
HXLINE( 276)					Float y = size->width;
HXDLIN( 276)					sourceSize->set_x(size->height);
HXDLIN( 276)					sourceSize->set_y(y);
            				}
HXLINE( 278)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,flipX,flipY,null());
            			}
            		}
HXLINE( 281)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSparrow,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerXml( ::Dynamic source, ::Dynamic xml){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_293_fromTexturePackerXml)
HXLINE( 294)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,false,null());
HXLINE( 295)		if (::hx::IsNull( graphic )) {
HXLINE( 296)			return null();
            		}
HXLINE( 299)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 300)		if (::hx::IsNotNull( frames )) {
HXLINE( 301)			return frames;
            		}
HXLINE( 303)		bool _hx_tmp;
HXDLIN( 303)		if (::hx::IsNotNull( graphic )) {
HXLINE( 303)			_hx_tmp = ::hx::IsNull( xml );
            		}
            		else {
HXLINE( 303)			_hx_tmp = true;
            		}
HXDLIN( 303)		if (_hx_tmp) {
HXLINE( 304)			return null();
            		}
HXLINE( 306)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 308)		 ::Xml data = ::flixel::_hx_system::_FlxAssets::FlxXmlAsset_Impl__obj::getXml(xml);
HXLINE( 310)		{
HXLINE( 310)			 ::Dynamic sprite = data->firstElement()->elements();
HXDLIN( 310)			while(( (bool)(sprite->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 310)				 ::Xml sprite1 = ( ( ::Xml)(sprite->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 312)				bool trimmed;
HXDLIN( 312)				if (!(sprite1->exists(HX_("oX",09,61,00,00)))) {
HXLINE( 312)					trimmed = sprite1->exists(HX_("oY",0a,61,00,00));
            				}
            				else {
HXLINE( 312)					trimmed = true;
            				}
HXLINE( 313)				bool rotated;
HXDLIN( 313)				if (sprite1->exists(HX_("r",72,00,00,00))) {
HXLINE( 313)					rotated = (sprite1->get(HX_("r",72,00,00,00)) == HX_("y",79,00,00,00));
            				}
            				else {
HXLINE( 313)					rotated = false;
            				}
HXLINE( 314)				int angle;
HXDLIN( 314)				if (rotated) {
HXLINE( 314)					angle = -90;
            				}
            				else {
HXLINE( 314)					angle = 0;
            				}
HXLINE( 315)				::String name = sprite1->get(HX_("n",6e,00,00,00));
HXLINE( 316)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(0,0);
HXDLIN( 316)				point->_inPool = false;
HXDLIN( 316)				 ::flixel::math::FlxBasePoint offset = point;
HXLINE( 317)				Float X = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("x",78,00,00,00)))) );
HXDLIN( 317)				Float Y = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("y",79,00,00,00)))) );
HXDLIN( 317)				Float Width = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("w",77,00,00,00)))) );
HXDLIN( 317)				Float Height = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("h",68,00,00,00)))) );
HXDLIN( 317)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 317)				_this->x = X;
HXDLIN( 317)				_this->y = Y;
HXDLIN( 317)				_this->width = Width;
HXDLIN( 317)				_this->height = Height;
HXDLIN( 317)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 317)				rect->_inPool = false;
HXDLIN( 317)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 318)				Float x = rect1->width;
HXDLIN( 318)				Float y = rect1->height;
HXDLIN( 318)				 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 318)				point1->_inPool = false;
HXDLIN( 318)				 ::flixel::math::FlxBasePoint sourceSize = point1;
HXLINE( 320)				if (trimmed) {
HXLINE( 322)					{
HXLINE( 322)						Float x = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("oX",09,61,00,00)))) );
HXDLIN( 322)						Float y = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("oY",0a,61,00,00)))) );
HXDLIN( 322)						offset->set_x(x);
HXDLIN( 322)						offset->set_y(y);
            					}
HXLINE( 323)					{
HXLINE( 323)						Float x1 = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("oW",08,61,00,00)))) );
HXDLIN( 323)						Float y1 = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("oH",f9,60,00,00)))) );
HXDLIN( 323)						sourceSize->set_x(x1);
HXDLIN( 323)						sourceSize->set_y(y1);
            					}
            				}
HXLINE( 326)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,null(),null(),null());
            			}
            		}
HXLINE( 329)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromTexturePackerXml,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSpriteSheetPacker( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_342_fromSpriteSheetPacker)
HXLINE( 343)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());
HXLINE( 344)		if (::hx::IsNull( graphic )) {
HXLINE( 345)			return null();
            		}
HXLINE( 348)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 349)		if (::hx::IsNotNull( frames )) {
HXLINE( 350)			return frames;
            		}
HXLINE( 352)		bool _hx_tmp;
HXDLIN( 352)		if (::hx::IsNotNull( graphic )) {
HXLINE( 352)			_hx_tmp = ::hx::IsNull( Description );
            		}
            		else {
HXLINE( 352)			_hx_tmp = true;
            		}
HXDLIN( 352)		if (_hx_tmp) {
HXLINE( 353)			return null();
            		}
HXLINE( 355)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 357)		if (::openfl::utils::Assets_obj::exists(Description,null())) {
HXLINE( 358)			Description = ::openfl::utils::Assets_obj::getText(Description);
            		}
HXLINE( 360)		::String pack = ::StringTools_obj::trim(Description);
HXLINE( 361)		::Array< ::String > lines = pack.split(HX_("\n",0a,00,00,00));
HXLINE( 363)		{
HXLINE( 363)			int _g = 0;
HXDLIN( 363)			int _g1 = lines->length;
HXDLIN( 363)			while((_g < _g1)){
HXLINE( 363)				_g = (_g + 1);
HXDLIN( 363)				int i = (_g - 1);
HXLINE( 365)				::Array< ::String > currImageData = lines->__get(i).split(HX_("=",3d,00,00,00));
HXLINE( 366)				::String name = ::StringTools_obj::trim(currImageData->__get(0));
HXLINE( 367)				::Array< ::String > currImageRegion = ::StringTools_obj::trim(currImageData->__get(1)).split(HX_(" ",20,00,00,00));
HXLINE( 369)				Float X = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(0))) );
HXDLIN( 369)				Float Y = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(1))) );
HXDLIN( 369)				Float Width = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(2))) );
HXDLIN( 369)				Float Height = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(3))) );
HXDLIN( 369)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 369)				_this->x = X;
HXDLIN( 369)				_this->y = Y;
HXDLIN( 369)				_this->width = Width;
HXDLIN( 369)				_this->height = Height;
HXDLIN( 369)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 369)				rect->_inPool = false;
HXDLIN( 369)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 371)				Float x = rect1->width;
HXDLIN( 371)				Float y = rect1->height;
HXDLIN( 371)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 371)				point->_inPool = false;
HXDLIN( 371)				 ::flixel::math::FlxBasePoint sourceSize = point;
HXLINE( 372)				 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 372)				point1->_inPool = false;
HXDLIN( 372)				 ::flixel::math::FlxBasePoint offset = point1;
HXLINE( 374)				frames->addAtlasFrame(rect1,sourceSize,offset,name,0,null(),null(),null());
            			}
            		}
HXLINE( 377)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSpriteSheetPacker,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::findFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_388_findFrame)
HXLINE( 389)		if (::hx::IsNull( border )) {
HXLINE( 390)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 390)			point->_inPool = false;
HXDLIN( 390)			 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 390)			point1->_weak = true;
HXDLIN( 390)			border = point1;
            		}
HXLINE( 392)		 ::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS_dyn();
HXDLIN( 392)		::cpp::VirtualArray collections = ( (::cpp::VirtualArray)(graphic->frameCollections->get(type)) );
HXDLIN( 392)		if (::hx::IsNull( collections )) {
HXLINE( 392)			collections = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 392)			graphic->frameCollections->set(type,collections);
            		}
HXDLIN( 392)		::Array< ::Dynamic> atlasFrames = collections;
HXLINE( 394)		{
HXLINE( 394)			int _g = 0;
HXDLIN( 394)			while((_g < atlasFrames->length)){
HXLINE( 394)				 ::flixel::graphics::frames::FlxAtlasFrames atlas = atlasFrames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxAtlasFrames >();
HXDLIN( 394)				_g = (_g + 1);
HXLINE( 395)				 ::flixel::math::FlxBasePoint _this = atlas->border;
HXDLIN( 395)				bool result;
HXDLIN( 395)				if ((::Math_obj::abs((_this->x - border->x)) <= ((Float)0.0000001))) {
HXLINE( 395)					result = (::Math_obj::abs((_this->y - border->y)) <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 395)					result = false;
            				}
HXDLIN( 395)				if (border->_weak) {
HXLINE( 395)					border->put();
            				}
HXDLIN( 395)				if (result) {
HXLINE( 396)					return atlas;
            				}
            			}
            		}
HXLINE( 398)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,findFrame,return )


::hx::ObjectPtr< FlxAtlasFrames_obj > FlxAtlasFrames_obj::__new( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border) {
	::hx::ObjectPtr< FlxAtlasFrames_obj > __this = new FlxAtlasFrames_obj();
	__this->__construct(parent,border);
	return __this;
}

::hx::ObjectPtr< FlxAtlasFrames_obj > FlxAtlasFrames_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border) {
	FlxAtlasFrames_obj *__this = (FlxAtlasFrames_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAtlasFrames_obj), true, "flixel.graphics.frames.FlxAtlasFrames"));
	*(void **)__this = FlxAtlasFrames_obj::_hx_vtable;
	__this->__construct(parent,border);
	return __this;
}

FlxAtlasFrames_obj::FlxAtlasFrames_obj()
{
}

::hx::Val FlxAtlasFrames_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"addBorder") ) { return ::hx::Val( addBorder_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxAtlasFrames_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"findFrame") ) { outValue = findFrame_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromLibGdx") ) { outValue = fromLibGdx_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromSparrow") ) { outValue = fromSparrow_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromAseprite") ) { outValue = fromAseprite_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDimensions") ) { outValue = getDimensions_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"texturePackerHelper") ) { outValue = texturePackerHelper_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fromTexturePackerXml") ) { outValue = fromTexturePackerXml_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"fromTexturePackerJson") ) { outValue = fromTexturePackerJson_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromSpriteSheetPacker") ) { outValue = fromSpriteSheetPacker_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxAtlasFrames_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxAtlasFrames_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxAtlasFrames_obj_sMemberFields[] = {
	HX_("addBorder",ed,81,3e,1c),
	::String(null()) };

::hx::Class FlxAtlasFrames_obj::__mClass;

static ::String FlxAtlasFrames_obj_sStaticFields[] = {
	HX_("fromAseprite",cf,40,ef,24),
	HX_("fromTexturePackerJson",bf,f0,7e,be),
	HX_("texturePackerHelper",0f,23,bd,b2),
	HX_("fromLibGdx",80,06,df,27),
	HX_("getDimensions",83,1a,12,39),
	HX_("fromSparrow",c2,9f,ec,33),
	HX_("fromTexturePackerXml",20,df,27,fb),
	HX_("fromSpriteSheetPacker",b6,b2,c0,5f),
	HX_("findFrame",34,a9,7a,f5),
	::String(null())
};

void FlxAtlasFrames_obj::__register()
{
	FlxAtlasFrames_obj _hx_dummy;
	FlxAtlasFrames_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.FlxAtlasFrames",d6,87,d5,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAtlasFrames_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxAtlasFrames_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxAtlasFrames_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxAtlasFrames_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAtlasFrames_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAtlasFrames_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
