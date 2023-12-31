#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxBasePoint
#include <flixel/util/FlxPool_flixel_math_FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_29953dbeb33e4775_29_new,"flixel.ui.FlxBar","new",0xec11b05b,"flixel.ui.FlxBar.new","flixel/ui/FlxBar.hx",29,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_198_destroy,"flixel.ui.FlxBar","destroy",0x13b32675,"flixel.ui.FlxBar.destroy","flixel/ui/FlxBar.hx",198,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_234_trackParent,"flixel.ui.FlxBar","trackParent",0x235ed510,"flixel.ui.FlxBar.trackParent","flixel/ui/FlxBar.hx",234,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_255_setParent,"flixel.ui.FlxBar","setParent",0x1ca008a7,"flixel.ui.FlxBar.setParent","flixel/ui/FlxBar.hx",255,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_274_stopTrackingParent,"flixel.ui.FlxBar","stopTrackingParent",0x3b6e39c8,"flixel.ui.FlxBar.stopTrackingParent","flixel/ui/FlxBar.hx",274,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_290_setCallbacks,"flixel.ui.FlxBar","setCallbacks",0x67217bb1,"flixel.ui.FlxBar.setCallbacks","flixel/ui/FlxBar.hx",290,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_303_setRange,"flixel.ui.FlxBar","setRange",0x4a8160e0,"flixel.ui.FlxBar.setRange","flixel/ui/FlxBar.hx",303,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_338_createFilledBar,"flixel.ui.FlxBar","createFilledBar",0x6a7e3330,"flixel.ui.FlxBar.createFilledBar","flixel/ui/FlxBar.hx",338,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_353_createColoredEmptyBar,"flixel.ui.FlxBar","createColoredEmptyBar",0xa6df1307,"flixel.ui.FlxBar.createColoredEmptyBar","flixel/ui/FlxBar.hx",353,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_406_createColoredFilledBar,"flixel.ui.FlxBar","createColoredFilledBar",0x03a68870,"flixel.ui.FlxBar.createColoredFilledBar","flixel/ui/FlxBar.hx",406,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_464_createGradientBar,"flixel.ui.FlxBar","createGradientBar",0x851ca162,"flixel.ui.FlxBar.createGradientBar","flixel/ui/FlxBar.hx",464,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_482_createGradientEmptyBar,"flixel.ui.FlxBar","createGradientEmptyBar",0x05ffcf57,"flixel.ui.FlxBar.createGradientEmptyBar","flixel/ui/FlxBar.hx",482,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_547_createGradientFilledBar,"flixel.ui.FlxBar","createGradientFilledBar",0xe12a9220,"flixel.ui.FlxBar.createGradientFilledBar","flixel/ui/FlxBar.hx",547,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_614_createImageBar,"flixel.ui.FlxBar","createImageBar",0xf0f89039,"flixel.ui.FlxBar.createImageBar","flixel/ui/FlxBar.hx",614,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_628_createImageEmptyBar,"flixel.ui.FlxBar","createImageEmptyBar",0xa6dfb520,"flixel.ui.FlxBar.createImageEmptyBar","flixel/ui/FlxBar.hx",628,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_670_createImageFilledBar,"flixel.ui.FlxBar","createImageFilledBar",0x0433bc37,"flixel.ui.FlxBar.createImageFilledBar","flixel/ui/FlxBar.hx",670,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_703_set_fillDirection,"flixel.ui.FlxBar","set_fillDirection",0x7ac2afda,"flixel.ui.FlxBar.set_fillDirection","flixel/ui/FlxBar.hx",703,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_720_updateValueFromParent,"flixel.ui.FlxBar","updateValueFromParent",0x9d60d3b7,"flixel.ui.FlxBar.updateValueFromParent","flixel/ui/FlxBar.hx",720,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_728_updateBar,"flixel.ui.FlxBar","updateBar",0x52521d85,"flixel.ui.FlxBar.updateBar","flixel/ui/FlxBar.hx",728,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_738_updateEmptyBar,"flixel.ui.FlxBar","updateEmptyBar",0x77e67454,"flixel.ui.FlxBar.updateEmptyBar","flixel/ui/FlxBar.hx",738,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_749_updateFilledBar,"flixel.ui.FlxBar","updateFilledBar",0x19144a83,"flixel.ui.FlxBar.updateFilledBar","flixel/ui/FlxBar.hx",749,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_824_update,"flixel.ui.FlxBar","update",0xdbe594ee,"flixel.ui.FlxBar.update","flixel/ui/FlxBar.hx",824,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_843_draw,"flixel.ui.FlxBar","draw",0x9cd647a9,"flixel.ui.FlxBar.draw","flixel/ui/FlxBar.hx",843,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_887_set_pixels,"flixel.ui.FlxBar","set_pixels",0x3c70e2cf,"flixel.ui.FlxBar.set_pixels","flixel/ui/FlxBar.hx",887,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_899_toString,"flixel.ui.FlxBar","toString",0x909c22d1,"flixel.ui.FlxBar.toString","flixel/ui/FlxBar.hx",899,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_910_get_percent,"flixel.ui.FlxBar","get_percent",0x8cbbddd7,"flixel.ui.FlxBar.get_percent","flixel/ui/FlxBar.hx",910,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_920_set_percent,"flixel.ui.FlxBar","set_percent",0x9728e4e3,"flixel.ui.FlxBar.set_percent","flixel/ui/FlxBar.hx",920,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_929_set_value,"flixel.ui.FlxBar","set_value",0x282d560f,"flixel.ui.FlxBar.set_value","flixel/ui/FlxBar.hx",929,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_960_get_value,"flixel.ui.FlxBar","get_value",0x44dc6a03,"flixel.ui.FlxBar.get_value","flixel/ui/FlxBar.hx",960,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_964_set_numDivisions,"flixel.ui.FlxBar","set_numDivisions",0x1f308ca2,"flixel.ui.FlxBar.set_numDivisions","flixel/ui/FlxBar.hx",964,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_971_get_frontFrames,"flixel.ui.FlxBar","get_frontFrames",0xa222c541,"flixel.ui.FlxBar.get_frontFrames","flixel/ui/FlxBar.hx",971,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_980_set_frontFrames,"flixel.ui.FlxBar","set_frontFrames",0x9dee424d,"flixel.ui.FlxBar.set_frontFrames","flixel/ui/FlxBar.hx",980,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_994_get_backFrames,"flixel.ui.FlxBar","get_backFrames",0x7b96195b,"flixel.ui.FlxBar.get_backFrames","flixel/ui/FlxBar.hx",994,0x9c56c8d5)
HX_LOCAL_STACK_FRAME(_hx_pos_29953dbeb33e4775_1003_set_backFrames,"flixel.ui.FlxBar","set_backFrames",0x9bb601cf,"flixel.ui.FlxBar.set_backFrames","flixel/ui/FlxBar.hx",1003,0x9c56c8d5)
namespace flixel{
namespace ui{

void FlxBar_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::flixel::ui::FlxBarFillDirection direction,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic parentRef,::String __o_variable,::hx::Null< Float >  __o_min,::hx::Null< Float >  __o_max,::hx::Null< bool >  __o_showBorder){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		int width = __o_width.Default(100);
            		int height = __o_height.Default(10);
            		::String variable = __o_variable;
            		if (::hx::IsNull(__o_variable)) variable = HX_("",00,00,00,00);
            		Float min = __o_min.Default(0);
            		Float max = __o_max.Default(100);
            		bool showBorder = __o_showBorder.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_29953dbeb33e4775_29_new)
HXLINE( 147)		this->_maxPercent = 100;
HXLINE(  88)		this->numDivisions = 100;
HXLINE(  50)		this->killOnEmpty = false;
HXLINE(  35)		this->fixedPosition = true;
HXLINE( 166)		super::__construct(x,y,null());
HXLINE( 168)		if (::hx::IsNull( direction )) {
HXLINE( 168)			direction = ::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT_dyn();
            		}
HXLINE( 170)		this->barWidth = width;
HXLINE( 171)		this->barHeight = height;
HXLINE( 173)		this->_filledBarPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 174)		this->_filledBarRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 175)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 177)			this->_zeroOffset =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 178)			this->_emptyBarRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 179)			this->makeGraphic(width,height,0,true,null());
            		}
            		else {
HXLINE( 183)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 183)			_this->x = ( (Float)(0) );
HXDLIN( 183)			_this->y = ( (Float)(0) );
HXDLIN( 183)			_this->width = ( (Float)(0) );
HXDLIN( 183)			_this->height = ( (Float)(0) );
HXDLIN( 183)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 183)			rect->_inPool = false;
HXDLIN( 183)			this->_filledFlxRect = rect;
            		}
HXLINE( 186)		if (::hx::IsNotNull( parentRef )) {
HXLINE( 188)			this->parent = parentRef;
HXLINE( 189)			this->parentVariable = variable;
            		}
HXLINE( 192)		this->set_fillDirection(direction);
HXLINE( 193)		this->createFilledBar(-16756480,-16714752,showBorder,null());
HXLINE( 194)		this->setRange(min,max);
            	}

Dynamic FlxBar_obj::__CreateEmpty() { return new FlxBar_obj; }

void *FlxBar_obj::_hx_vtable = 0;

Dynamic FlxBar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBar_obj > _hx_result = new FlxBar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return _hx_result;
}

bool FlxBar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x0a9ceb91) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a9ceb91;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxBar_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_198_destroy)
HXLINE( 199)		this->positionOffset = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->positionOffset)) );
HXLINE( 201)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 203)			this->_frontFrame = null();
HXLINE( 204)			this->_filledFlxRect = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(this->_filledFlxRect)) );
            		}
            		else {
HXLINE( 208)			this->_emptyBarRect = null();
HXLINE( 209)			this->_zeroOffset = null();
HXLINE( 210)			this->_emptyBar = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_emptyBar);
HXLINE( 211)			this->_filledBar = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_filledBar);
            		}
HXLINE( 213)		this->_filledBarRect = null();
HXLINE( 214)		this->_filledBarPoint = null();
HXLINE( 216)		this->parent = null();
HXLINE( 217)		this->positionOffset = null();
HXLINE( 218)		this->emptyCallback = null();
HXLINE( 219)		this->filledCallback = null();
HXLINE( 221)		this->super::destroy();
            	}


void FlxBar_obj::trackParent(int offsetX,int offsetY){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_234_trackParent)
HXLINE( 235)		this->fixedPosition = false;
HXLINE( 236)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(offsetX,offsetY);
HXDLIN( 236)		point->_inPool = false;
HXDLIN( 236)		this->positionOffset = point;
HXLINE( 238)		if (::Reflect_obj::hasField(this->parent,HX_("scrollFactor",bc,ec,cf,3b))) {
HXLINE( 240)			this->scrollFactor->set_x(( (Float)( ::Dynamic(this->parent->__Field(HX_("scrollFactor",bc,ec,cf,3b),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ));
HXLINE( 241)			this->scrollFactor->set_y(( (Float)( ::Dynamic(this->parent->__Field(HX_("scrollFactor",bc,ec,cf,3b),::hx::paccDynamic))->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,trackParent,(void))

void FlxBar_obj::setParent( ::Dynamic parentRef,::String variable,::hx::Null< bool >  __o_track,::hx::Null< int >  __o_offsetX,::hx::Null< int >  __o_offsetY){
            		bool track = __o_track.Default(false);
            		int offsetX = __o_offsetX.Default(0);
            		int offsetY = __o_offsetY.Default(0);
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_255_setParent)
HXLINE( 256)		this->parent = parentRef;
HXLINE( 257)		this->parentVariable = variable;
HXLINE( 259)		if (track) {
HXLINE( 261)			this->trackParent(offsetX,offsetY);
            		}
HXLINE( 264)		this->updateValueFromParent();
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxBar_obj,setParent,(void))

void FlxBar_obj::stopTrackingParent(int posX,int posY){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_274_stopTrackingParent)
HXLINE( 275)		this->fixedPosition = true;
HXLINE( 276)		this->set_x(( (Float)(posX) ));
HXLINE( 277)		this->set_y(( (Float)(posY) ));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,stopTrackingParent,(void))

void FlxBar_obj::setCallbacks( ::Dynamic onEmpty, ::Dynamic onFilled,::hx::Null< bool >  __o_killOnEmpty){
            		bool killOnEmpty = __o_killOnEmpty.Default(false);
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_290_setCallbacks)
HXLINE( 291)		 ::Dynamic _hx_tmp;
HXDLIN( 291)		if (::hx::IsNotNull( onEmpty )) {
HXLINE( 291)			_hx_tmp = onEmpty;
            		}
            		else {
HXLINE( 291)			_hx_tmp = this->emptyCallback;
            		}
HXDLIN( 291)		this->emptyCallback = _hx_tmp;
HXLINE( 292)		 ::Dynamic _hx_tmp1;
HXDLIN( 292)		if (::hx::IsNotNull( onFilled )) {
HXLINE( 292)			_hx_tmp1 = onFilled;
            		}
            		else {
HXLINE( 292)			_hx_tmp1 = this->filledCallback;
            		}
HXDLIN( 292)		this->filledCallback = _hx_tmp1;
HXLINE( 293)		this->killOnEmpty = killOnEmpty;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxBar_obj,setCallbacks,(void))

void FlxBar_obj::setRange(Float min,Float max){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_303_setRange)
HXLINE( 304)		if ((max <= min)) {
HXLINE( 306)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("FlxBar: max cannot be less than or equal to min",5b,e6,e7,51)));
            		}
HXLINE( 310)		this->min = min;
HXLINE( 311)		this->max = max;
HXLINE( 312)		this->range = (max - min);
HXLINE( 313)		this->pct = (this->range / ( (Float)(this->_maxPercent) ));
HXLINE( 315)		Float _hx_tmp;
HXDLIN( 315)		if (this->_fillHorizontal) {
HXLINE( 315)			_hx_tmp = (( (Float)(this->barWidth) ) / ( (Float)(this->_maxPercent) ));
            		}
            		else {
HXLINE( 315)			_hx_tmp = (( (Float)(this->barHeight) ) / ( (Float)(this->_maxPercent) ));
            		}
HXDLIN( 315)		this->pxPerPercent = _hx_tmp;
HXLINE( 317)		if (!(::Math_obj::isNaN(this->get_value()))) {
HXLINE( 319)			this->set_value(::Math_obj::max(min,::Math_obj::min(this->get_value(),max)));
            		}
            		else {
HXLINE( 323)			this->set_value(min);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,setRange,(void))

 ::flixel::ui::FlxBar FlxBar_obj::createFilledBar(int empty,int fill,::hx::Null< bool >  __o_showBorder,::hx::Null< int >  __o_border){
            		bool showBorder = __o_showBorder.Default(false);
            		int border = __o_border.Default(-1);
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_338_createFilledBar)
HXLINE( 339)		this->createColoredEmptyBar(empty,showBorder,border);
HXLINE( 340)		this->createColoredFilledBar(fill,showBorder,border);
HXLINE( 341)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBar_obj,createFilledBar,return )

 ::flixel::ui::FlxBar FlxBar_obj::createColoredEmptyBar(int empty,::hx::Null< bool >  __o_showBorder,::hx::Null< int >  __o_border){
            		bool showBorder = __o_showBorder.Default(false);
            		int border = __o_border.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_29953dbeb33e4775_353_createColoredEmptyBar)
HXLINE( 354)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 356)			::String emptyKey = ((((HX_("empty: ",73,ea,c7,c6) + this->barWidth) + HX_("x",78,00,00,00)) + this->barHeight) + HX_(":",3a,00,00,00));
HXDLIN( 356)			::String emptyKey1 = HX_("0x",48,2a,00,00);
HXDLIN( 356)			::String emptyKey2 = ::StringTools_obj::hex(((empty >> 24) & 255),2);
HXDLIN( 356)			::String emptyKey3 = ((emptyKey1 + emptyKey2) + ::StringTools_obj::hex(((empty >> 16) & 255),2));
HXDLIN( 356)			::String emptyKey4 = (emptyKey3 + ::StringTools_obj::hex(((empty >> 8) & 255),2));
HXDLIN( 356)			::String emptyKey5 = (emptyKey + (emptyKey4 + ::StringTools_obj::hex((empty & 255),2)));
HXLINE( 357)			if (showBorder) {
HXLINE( 358)				::String emptyKey = HX_("0x",48,2a,00,00);
HXDLIN( 358)				::String emptyKey1 = ::StringTools_obj::hex(((border >> 24) & 255),2);
HXDLIN( 358)				::String emptyKey2 = ((emptyKey + emptyKey1) + ::StringTools_obj::hex(((border >> 16) & 255),2));
HXDLIN( 358)				::String emptyKey3 = (emptyKey2 + ::StringTools_obj::hex(((border >> 8) & 255),2));
HXDLIN( 358)				emptyKey5 = (emptyKey5 + (HX_(",border: ",be,9e,76,9a) + (emptyKey3 + ::StringTools_obj::hex((border & 255),2))));
            			}
HXLINE( 360)			if (::hx::IsNull( ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(emptyKey5)) ) )) {
HXLINE( 362)				 ::openfl::display::BitmapData emptyBar = null();
HXLINE( 364)				if (showBorder) {
HXLINE( 366)					emptyBar =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->barWidth,this->barHeight,true,border);
HXLINE( 367)					emptyBar->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,1,1,(this->barWidth - 2),(this->barHeight - 2)),empty);
            				}
            				else {
HXLINE( 371)					emptyBar =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->barWidth,this->barHeight,true,empty);
            				}
HXLINE( 374)				::flixel::FlxG_obj::bitmap->add(emptyBar,false,emptyKey5);
            			}
HXLINE( 377)			this->set_frames(( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(emptyKey5)) )->get_imageFrame());
            		}
            		else {
HXLINE( 381)			if (showBorder) {
HXLINE( 383)				this->_emptyBar =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->barWidth,this->barHeight,true,border);
HXLINE( 384)				 ::openfl::display::BitmapData _hx_tmp = this->_emptyBar;
HXDLIN( 384)				_hx_tmp->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,1,1,(this->barWidth - 2),(this->barHeight - 2)),empty);
            			}
            			else {
HXLINE( 388)				this->_emptyBar =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->barWidth,this->barHeight,true,empty);
            			}
HXLINE( 391)			this->_emptyBarRect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(this->barWidth) ),( (Float)(this->barHeight) ));
HXLINE( 392)			this->updateEmptyBar();
            		}
HXLINE( 395)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxBar_obj,createColoredEmptyBar,return )

 ::flixel::ui::FlxBar FlxBar_obj::createColoredFilledBar(int fill,::hx::Null< bool >  __o_showBorder,::hx::Null< int >  __o_border){
            		bool showBorder = __o_showBorder.Default(false);
            		int border = __o_border.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_29953dbeb33e4775_406_createColoredFilledBar)
HXLINE( 407)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 409)			::String filledKey = ((((HX_("filled: ",c8,6c,47,79) + this->barWidth) + HX_("x",78,00,00,00)) + this->barHeight) + HX_(":",3a,00,00,00));
HXDLIN( 409)			::String filledKey1 = HX_("0x",48,2a,00,00);
HXDLIN( 409)			::String filledKey2 = ::StringTools_obj::hex(((fill >> 24) & 255),2);
HXDLIN( 409)			::String filledKey3 = ((filledKey1 + filledKey2) + ::StringTools_obj::hex(((fill >> 16) & 255),2));
HXDLIN( 409)			::String filledKey4 = (filledKey3 + ::StringTools_obj::hex(((fill >> 8) & 255),2));
HXDLIN( 409)			::String filledKey5 = (filledKey + (filledKey4 + ::StringTools_obj::hex((fill & 255),2)));
HXLINE( 410)			if (showBorder) {
HXLINE( 411)				::String filledKey = HX_("0x",48,2a,00,00);
HXDLIN( 411)				::String filledKey1 = ::StringTools_obj::hex(((border >> 24) & 255),2);
HXDLIN( 411)				::String filledKey2 = ((filledKey + filledKey1) + ::StringTools_obj::hex(((border >> 16) & 255),2));
HXDLIN( 411)				::String filledKey3 = (filledKey2 + ::StringTools_obj::hex(((border >> 8) & 255),2));
HXDLIN( 411)				filledKey5 = (filledKey5 + (HX_(",border: ",be,9e,76,9a) + (filledKey3 + ::StringTools_obj::hex((border & 255),2))));
            			}
HXLINE( 413)			if (::hx::IsNull( ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(filledKey5)) ) )) {
HXLINE( 415)				 ::openfl::display::BitmapData filledBar = null();
HXLINE( 417)				if (showBorder) {
HXLINE( 419)					filledBar =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->barWidth,this->barHeight,true,border);
HXLINE( 420)					filledBar->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,1,1,(this->barWidth - 2),(this->barHeight - 2)),fill);
            				}
            				else {
HXLINE( 424)					filledBar =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->barWidth,this->barHeight,true,fill);
            				}
HXLINE( 427)				::flixel::FlxG_obj::bitmap->add(filledBar,false,filledKey5);
            			}
HXLINE( 430)			this->set_frontFrames(( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(filledKey5)) )->get_imageFrame());
            		}
            		else {
HXLINE( 434)			if (showBorder) {
HXLINE( 436)				this->_filledBar =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->barWidth,this->barHeight,true,border);
HXLINE( 437)				 ::openfl::display::BitmapData _hx_tmp = this->_filledBar;
HXDLIN( 437)				_hx_tmp->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,1,1,(this->barWidth - 2),(this->barHeight - 2)),fill);
            			}
            			else {
HXLINE( 441)				this->_filledBar =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->barWidth,this->barHeight,true,fill);
            			}
HXLINE( 444)			this->_filledBarRect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(this->barWidth) ),( (Float)(this->barHeight) ));
HXLINE( 445)			this->updateFilledBar();
            		}
HXLINE( 447)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxBar_obj,createColoredFilledBar,return )

 ::flixel::ui::FlxBar FlxBar_obj::createGradientBar(::Array< int > empty,::Array< int > fill,::hx::Null< int >  __o_chunkSize,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_showBorder,::hx::Null< int >  __o_border){
            		int chunkSize = __o_chunkSize.Default(1);
            		int rotation = __o_rotation.Default(180);
            		bool showBorder = __o_showBorder.Default(false);
            		int border = __o_border.Default(-1);
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_464_createGradientBar)
HXLINE( 465)		this->createGradientEmptyBar(empty,chunkSize,rotation,showBorder,border);
HXLINE( 466)		this->createGradientFilledBar(fill,chunkSize,rotation,showBorder,border);
HXLINE( 467)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxBar_obj,createGradientBar,return )

 ::flixel::ui::FlxBar FlxBar_obj::createGradientEmptyBar(::Array< int > empty,::hx::Null< int >  __o_chunkSize,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_showBorder,::hx::Null< int >  __o_border){
            		int chunkSize = __o_chunkSize.Default(1);
            		int rotation = __o_rotation.Default(180);
            		bool showBorder = __o_showBorder.Default(false);
            		int border = __o_border.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_29953dbeb33e4775_482_createGradientEmptyBar)
HXLINE( 483)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 485)			::String emptyKey = ((((HX_("Gradient:",2a,58,e6,6e) + this->barWidth) + HX_("x",78,00,00,00)) + this->barHeight) + HX_(",colors:[",bd,d0,85,cb));
HXLINE( 486)			{
HXLINE( 486)				int _g = 0;
HXDLIN( 486)				while((_g < empty->length)){
HXLINE( 486)					int col = empty->__get(_g);
HXDLIN( 486)					_g = (_g + 1);
HXLINE( 488)					::String emptyKey1 = HX_("0x",48,2a,00,00);
HXDLIN( 488)					::String emptyKey2 = ::StringTools_obj::hex(((col >> 24) & 255),2);
HXDLIN( 488)					::String emptyKey3 = ((emptyKey1 + emptyKey2) + ::StringTools_obj::hex(((col >> 16) & 255),2));
HXDLIN( 488)					::String emptyKey4 = (emptyKey3 + ::StringTools_obj::hex(((col >> 8) & 255),2));
HXDLIN( 488)					emptyKey = (emptyKey + ((emptyKey4 + ::StringTools_obj::hex((col & 255),2)) + HX_(",",2c,00,00,00)));
            				}
            			}
HXLINE( 490)			emptyKey = (emptyKey + (((HX_("],chunkSize: ",25,ff,35,eb) + chunkSize) + HX_(",rotation: ",90,2a,b9,0a)) + rotation));
HXLINE( 492)			if (showBorder) {
HXLINE( 494)				::String emptyKey1 = HX_("0x",48,2a,00,00);
HXDLIN( 494)				::String emptyKey2 = ::StringTools_obj::hex(((border >> 24) & 255),2);
HXDLIN( 494)				::String emptyKey3 = ((emptyKey1 + emptyKey2) + ::StringTools_obj::hex(((border >> 16) & 255),2));
HXDLIN( 494)				::String emptyKey4 = (emptyKey3 + ::StringTools_obj::hex(((border >> 8) & 255),2));
HXDLIN( 494)				emptyKey = (emptyKey + (HX_(",border: ",be,9e,76,9a) + (emptyKey4 + ::StringTools_obj::hex((border & 255),2))));
            			}
HXLINE( 497)			if (::hx::IsNull( ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(emptyKey)) ) )) {
HXLINE( 499)				 ::openfl::display::BitmapData emptyBar = null();
HXLINE( 501)				if (showBorder) {
HXLINE( 503)					emptyBar =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->barWidth,this->barHeight,true,border);
HXLINE( 504)					::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(emptyBar,(this->barWidth - 2),(this->barHeight - 2),empty,1,1,chunkSize,rotation,null());
            				}
            				else {
HXLINE( 508)					emptyBar = ::flixel::util::FlxGradient_obj::createGradientBitmapData(this->barWidth,this->barHeight,empty,chunkSize,rotation,null());
            				}
HXLINE( 511)				::flixel::FlxG_obj::bitmap->add(emptyBar,false,emptyKey);
            			}
HXLINE( 514)			this->set_frames(( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(emptyKey)) )->get_imageFrame());
            		}
            		else {
HXLINE( 518)			if (showBorder) {
HXLINE( 520)				this->_emptyBar =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->barWidth,this->barHeight,true,border);
HXLINE( 521)				::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(this->_emptyBar,(this->barWidth - 2),(this->barHeight - 2),empty,1,1,chunkSize,rotation,null());
            			}
            			else {
HXLINE( 525)				this->_emptyBar = ::flixel::util::FlxGradient_obj::createGradientBitmapData(this->barWidth,this->barHeight,empty,chunkSize,rotation,null());
            			}
HXLINE( 528)			this->_emptyBarRect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(this->barWidth) ),( (Float)(this->barHeight) ));
HXLINE( 529)			this->updateEmptyBar();
            		}
HXLINE( 532)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxBar_obj,createGradientEmptyBar,return )

 ::flixel::ui::FlxBar FlxBar_obj::createGradientFilledBar(::Array< int > fill,::hx::Null< int >  __o_chunkSize,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_showBorder,::hx::Null< int >  __o_border){
            		int chunkSize = __o_chunkSize.Default(1);
            		int rotation = __o_rotation.Default(180);
            		bool showBorder = __o_showBorder.Default(false);
            		int border = __o_border.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_29953dbeb33e4775_547_createGradientFilledBar)
HXLINE( 548)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 550)			::String filledKey = ((((HX_("Gradient:",2a,58,e6,6e) + this->barWidth) + HX_("x",78,00,00,00)) + this->barHeight) + HX_(",colors:[",bd,d0,85,cb));
HXLINE( 551)			{
HXLINE( 551)				int _g = 0;
HXDLIN( 551)				while((_g < fill->length)){
HXLINE( 551)					int col = fill->__get(_g);
HXDLIN( 551)					_g = (_g + 1);
HXLINE( 553)					::String filledKey1 = HX_("0x",48,2a,00,00);
HXDLIN( 553)					::String filledKey2 = ::StringTools_obj::hex(((col >> 24) & 255),2);
HXDLIN( 553)					::String filledKey3 = ((filledKey1 + filledKey2) + ::StringTools_obj::hex(((col >> 16) & 255),2));
HXDLIN( 553)					::String filledKey4 = (filledKey3 + ::StringTools_obj::hex(((col >> 8) & 255),2));
HXDLIN( 553)					filledKey = (filledKey + ((filledKey4 + ::StringTools_obj::hex((col & 255),2)) + HX_(",",2c,00,00,00)));
            				}
            			}
HXLINE( 555)			filledKey = (filledKey + (((HX_("],chunkSize: ",25,ff,35,eb) + chunkSize) + HX_(",rotation: ",90,2a,b9,0a)) + rotation));
HXLINE( 557)			if (showBorder) {
HXLINE( 559)				::String filledKey1 = HX_("0x",48,2a,00,00);
HXDLIN( 559)				::String filledKey2 = ::StringTools_obj::hex(((border >> 24) & 255),2);
HXDLIN( 559)				::String filledKey3 = ((filledKey1 + filledKey2) + ::StringTools_obj::hex(((border >> 16) & 255),2));
HXDLIN( 559)				::String filledKey4 = (filledKey3 + ::StringTools_obj::hex(((border >> 8) & 255),2));
HXDLIN( 559)				filledKey = (filledKey + (HX_(",border: ",be,9e,76,9a) + (filledKey4 + ::StringTools_obj::hex((border & 255),2))));
            			}
HXLINE( 562)			if (::hx::IsNull( ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(filledKey)) ) )) {
HXLINE( 564)				 ::openfl::display::BitmapData filledBar = null();
HXLINE( 566)				if (showBorder) {
HXLINE( 568)					filledBar =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->barWidth,this->barHeight,true,border);
HXLINE( 569)					::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(filledBar,(this->barWidth - 2),(this->barHeight - 2),fill,1,1,chunkSize,rotation,null());
            				}
            				else {
HXLINE( 573)					filledBar = ::flixel::util::FlxGradient_obj::createGradientBitmapData(this->barWidth,this->barHeight,fill,chunkSize,rotation,null());
            				}
HXLINE( 576)				::flixel::FlxG_obj::bitmap->add(filledBar,false,filledKey);
            			}
HXLINE( 579)			this->set_frontFrames(( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(filledKey)) )->get_imageFrame());
            		}
            		else {
HXLINE( 583)			if (showBorder) {
HXLINE( 585)				this->_filledBar =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->barWidth,this->barHeight,true,border);
HXLINE( 586)				::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(this->_filledBar,(this->barWidth - 2),(this->barHeight - 2),fill,1,1,chunkSize,rotation,null());
            			}
            			else {
HXLINE( 590)				this->_filledBar = ::flixel::util::FlxGradient_obj::createGradientBitmapData(this->barWidth,this->barHeight,fill,chunkSize,rotation,null());
            			}
HXLINE( 593)			this->_filledBarRect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(this->barWidth) ),( (Float)(this->barHeight) ));
HXLINE( 594)			this->updateFilledBar();
            		}
HXLINE( 597)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxBar_obj,createGradientFilledBar,return )

 ::flixel::ui::FlxBar FlxBar_obj::createImageBar( ::Dynamic empty, ::Dynamic fill,::hx::Null< int >  __o_emptyBackground,::hx::Null< int >  __o_fillBackground){
            		int emptyBackground = __o_emptyBackground.Default(-16777216);
            		int fillBackground = __o_fillBackground.Default(-16711936);
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_614_createImageBar)
HXLINE( 615)		this->createImageEmptyBar(empty,emptyBackground);
HXLINE( 616)		this->createImageFilledBar(fill,fillBackground);
HXLINE( 617)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBar_obj,createImageBar,return )

 ::flixel::ui::FlxBar FlxBar_obj::createImageEmptyBar( ::Dynamic empty,::hx::Null< int >  __o_emptyBackground){
            		int emptyBackground = __o_emptyBackground.Default(-16777216);
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_628_createImageEmptyBar)
HXLINE( 629)		if (::hx::IsNotNull( empty )) {
HXLINE( 631)			 ::flixel::graphics::FlxGraphic emptyGraphic = ::flixel::FlxG_obj::bitmap->add(empty,null(),null());
HXLINE( 633)			if (::flixel::FlxG_obj::renderTile) {
HXLINE( 635)				this->set_frames(emptyGraphic->get_imageFrame());
            			}
            			else {
HXLINE( 639)				this->_emptyBar = emptyGraphic->bitmap->clone();
HXLINE( 641)				this->barWidth = this->_emptyBar->width;
HXLINE( 642)				this->barHeight = this->_emptyBar->height;
HXLINE( 644)				this->_emptyBarRect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(this->barWidth) ),( (Float)(this->barHeight) ));
HXLINE( 646)				bool _hx_tmp;
HXDLIN( 646)				if (::hx::IsNotNull( this->graphic )) {
HXLINE( 646)					if ((this->frame->sourceSize->x == this->barWidth)) {
HXLINE( 646)						_hx_tmp = (this->frame->sourceSize->y != this->barHeight);
            					}
            					else {
HXLINE( 646)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 646)					_hx_tmp = true;
            				}
HXDLIN( 646)				if (_hx_tmp) {
HXLINE( 648)					this->makeGraphic(this->barWidth,this->barHeight,0,true,null());
            				}
HXLINE( 651)				this->updateEmptyBar();
            			}
            		}
            		else {
HXLINE( 656)			this->createColoredEmptyBar(emptyBackground,null(),null());
            		}
HXLINE( 659)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,createImageEmptyBar,return )

 ::flixel::ui::FlxBar FlxBar_obj::createImageFilledBar( ::Dynamic fill,::hx::Null< int >  __o_fillBackground){
            		int fillBackground = __o_fillBackground.Default(-16711936);
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_670_createImageFilledBar)
HXLINE( 671)		if (::hx::IsNotNull( fill )) {
HXLINE( 673)			 ::flixel::graphics::FlxGraphic filledGraphic = ::flixel::FlxG_obj::bitmap->add(fill,null(),null());
HXLINE( 675)			if (::flixel::FlxG_obj::renderTile) {
HXLINE( 677)				this->set_frontFrames(filledGraphic->get_imageFrame());
            			}
            			else {
HXLINE( 681)				this->_filledBar = filledGraphic->bitmap->clone();
HXLINE( 683)				this->_filledBarRect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(this->barWidth) ),( (Float)(this->barHeight) ));
HXLINE( 685)				bool _hx_tmp;
HXDLIN( 685)				if (::hx::IsNotNull( this->graphic )) {
HXLINE( 685)					if ((this->frame->sourceSize->x == this->barWidth)) {
HXLINE( 685)						_hx_tmp = (this->frame->sourceSize->y != this->barHeight);
            					}
            					else {
HXLINE( 685)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 685)					_hx_tmp = true;
            				}
HXDLIN( 685)				if (_hx_tmp) {
HXLINE( 687)					this->makeGraphic(this->barWidth,this->barHeight,0,true,null());
            				}
HXLINE( 690)				Float _hx_tmp1;
HXDLIN( 690)				if (this->_fillHorizontal) {
HXLINE( 690)					_hx_tmp1 = (( (Float)(this->barWidth) ) / ( (Float)(this->_maxPercent) ));
            				}
            				else {
HXLINE( 690)					_hx_tmp1 = (( (Float)(this->barHeight) ) / ( (Float)(this->_maxPercent) ));
            				}
HXDLIN( 690)				this->pxPerPercent = _hx_tmp1;
HXLINE( 691)				this->updateFilledBar();
            			}
            		}
            		else {
HXLINE( 696)			this->createColoredFilledBar(fillBackground,null(),null());
            		}
HXLINE( 699)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,createImageFilledBar,return )

 ::flixel::ui::FlxBarFillDirection FlxBar_obj::set_fillDirection( ::flixel::ui::FlxBarFillDirection direction){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_703_set_fillDirection)
HXLINE( 704)		this->fillDirection = direction;
HXLINE( 706)		switch((int)(direction->_hx_getIndex())){
            			case (int)2: case (int)3: case (int)6: case (int)7: {
HXLINE( 712)				this->_fillHorizontal = false;
            			}
            			break;
            			case (int)0: case (int)1: case (int)4: case (int)5: {
HXLINE( 709)				this->_fillHorizontal = true;
            			}
            			break;
            		}
HXLINE( 715)		return this->fillDirection;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_fillDirection,return )

void FlxBar_obj::updateValueFromParent(){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_720_updateValueFromParent)
HXDLIN( 720)		this->set_value(( (Float)(::Reflect_obj::getProperty(this->parent,this->parentVariable)) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateValueFromParent,(void))

void FlxBar_obj::updateBar(){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_728_updateBar)
HXLINE( 729)		this->updateEmptyBar();
HXLINE( 730)		this->updateFilledBar();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateBar,(void))

void FlxBar_obj::updateEmptyBar(){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_738_updateEmptyBar)
HXDLIN( 738)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 740)			this->get_pixels()->copyPixels(this->_emptyBar,this->_emptyBarRect,this->_zeroOffset,null(),null(),null());
HXLINE( 741)			this->dirty = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateEmptyBar,(void))

void FlxBar_obj::updateFilledBar(){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_749_updateFilledBar)
HXLINE( 750)		this->_filledBarRect->width = ( (Float)(this->barWidth) );
HXLINE( 751)		this->_filledBarRect->height = ( (Float)(this->barHeight) );
HXLINE( 753)		Float fraction = this->get_value();
HXDLIN( 753)		Float fraction1 = ((fraction - this->min) / this->range);
HXLINE( 754)		Float percent = (fraction1 * ( (Float)(this->_maxPercent) ));
HXLINE( 755)		Float maxScale;
HXDLIN( 755)		if (this->_fillHorizontal) {
HXLINE( 755)			maxScale = ( (Float)(this->barWidth) );
            		}
            		else {
HXLINE( 755)			maxScale = ( (Float)(this->barHeight) );
            		}
HXLINE( 756)		Float scaleInterval = (maxScale / ( (Float)(this->numDivisions) ));
HXLINE( 757)		Float interval = ( (Float)(::Math_obj::round((( (Float)(::Std_obj::_hx_int(((fraction1 * maxScale) / scaleInterval))) ) * scaleInterval))) );
HXLINE( 759)		if (this->_fillHorizontal) {
HXLINE( 761)			this->_filledBarRect->width = ( (Float)(::Std_obj::_hx_int(interval)) );
            		}
            		else {
HXLINE( 765)			this->_filledBarRect->height = ( (Float)(::Std_obj::_hx_int(interval)) );
            		}
HXLINE( 768)		if ((percent > 0)) {
HXLINE( 770)			switch((int)(this->fillDirection->_hx_getIndex())){
            				case (int)1: {
HXLINE( 780)					this->_filledBarRect->x = (( (Float)(this->barWidth) ) - this->_filledBarRect->width);
HXLINE( 781)					this->_filledBarPoint->x = (( (Float)(this->barWidth) ) - this->_filledBarRect->width);
            				}
            				break;
            				case (int)0: case (int)2: {
            				}
            				break;
            				case (int)3: {
HXLINE( 776)					this->_filledBarRect->y = (( (Float)(this->barHeight) ) - this->_filledBarRect->height);
HXLINE( 777)					this->_filledBarPoint->y = (( (Float)(this->barHeight) ) - this->_filledBarRect->height);
            				}
            				break;
            				case (int)4: {
HXLINE( 784)					this->_filledBarRect->x = ( (Float)(::Std_obj::_hx_int(((( (Float)(this->barWidth) ) / ( (Float)(2) )) - (this->_filledBarRect->width / ( (Float)(2) ))))) );
HXLINE( 785)					this->_filledBarPoint->x = ( (Float)(::Std_obj::_hx_int(((( (Float)(this->barWidth) ) / ( (Float)(2) )) - (this->_filledBarRect->width / ( (Float)(2) ))))) );
            				}
            				break;
            				case (int)5: {
HXLINE( 788)					this->_filledBarRect->width = ( (Float)(::Std_obj::_hx_int((maxScale - interval))) );
HXLINE( 789)					this->_filledBarPoint->x = ( (Float)(::Std_obj::_hx_int(((( (Float)(this->barWidth) ) - this->_filledBarRect->width) / ( (Float)(2) )))) );
            				}
            				break;
            				case (int)6: {
HXLINE( 792)					this->_filledBarRect->y = ( (Float)(::Std_obj::_hx_int(((( (Float)(this->barHeight) ) / ( (Float)(2) )) - (this->_filledBarRect->height / ( (Float)(2) ))))) );
HXLINE( 793)					this->_filledBarPoint->y = ( (Float)(::Std_obj::_hx_int(((( (Float)(this->barHeight) ) / ( (Float)(2) )) - (this->_filledBarRect->height / ( (Float)(2) ))))) );
            				}
            				break;
            				case (int)7: {
HXLINE( 796)					this->_filledBarRect->height = ( (Float)(::Std_obj::_hx_int((maxScale - interval))) );
HXLINE( 797)					this->_filledBarPoint->y = ( (Float)(::Std_obj::_hx_int(((( (Float)(this->barHeight) ) - this->_filledBarRect->height) / ( (Float)(2) )))) );
            				}
            				break;
            			}
HXLINE( 800)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 802)				this->get_pixels()->copyPixels(this->_filledBar,this->_filledBarRect,this->_filledBarPoint,null(),null(),true);
            			}
            			else {
HXLINE( 806)				if (::hx::IsNotNull( this->get_frontFrames() )) {
HXLINE( 808)					{
HXLINE( 808)						 ::flixel::math::FlxRect _this = this->_filledFlxRect;
HXDLIN( 808)						 ::openfl::geom::Rectangle FlashRect = this->_filledBarRect;
HXDLIN( 808)						_this->x = FlashRect->x;
HXDLIN( 808)						_this->y = FlashRect->y;
HXDLIN( 808)						_this->width = FlashRect->width;
HXDLIN( 808)						_this->height = FlashRect->height;
HXDLIN( 808)						 ::flixel::math::FlxRect _this1 = _this;
HXDLIN( 808)						_this1->x = ( (Float)(::Math_obj::round(_this1->x)) );
HXDLIN( 808)						_this1->y = ( (Float)(::Math_obj::round(_this1->y)) );
HXDLIN( 808)						_this1->width = ( (Float)(::Math_obj::round(_this1->width)) );
HXDLIN( 808)						_this1->height = ( (Float)(::Math_obj::round(_this1->height)) );
            					}
HXLINE( 809)					if ((::Std_obj::_hx_int(percent) > 0)) {
HXLINE( 811)						this->_frontFrame = this->get_frontFrames()->get_frame()->clipTo(this->_filledFlxRect,this->_frontFrame);
            					}
            				}
            			}
            		}
HXLINE( 817)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 819)			this->dirty = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateFilledBar,(void))

void FlxBar_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_824_update)
HXLINE( 825)		if (::hx::IsNotNull( this->parent )) {
HXLINE( 827)			 ::Dynamic _hx_tmp = ::Reflect_obj::getProperty(this->parent,this->parentVariable);
HXDLIN( 827)			if (::hx::IsNotEq( _hx_tmp,this->get_value() )) {
HXLINE( 829)				this->updateValueFromParent();
            			}
HXLINE( 832)			if (!(this->fixedPosition)) {
HXLINE( 834)				this->set_x(( (Float)((this->parent->__Field(HX_("x",78,00,00,00),::hx::paccDynamic) + this->positionOffset->x)) ));
HXLINE( 835)				this->set_y(( (Float)((this->parent->__Field(HX_("y",79,00,00,00),::hx::paccDynamic) + this->positionOffset->y)) ));
            			}
            		}
HXLINE( 839)		this->super::update(elapsed);
            	}


void FlxBar_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_843_draw)
HXLINE( 844)		this->super::draw();
HXLINE( 846)		if (!(::flixel::FlxG_obj::renderTile)) {
HXLINE( 847)			return;
            		}
HXLINE( 849)		if ((this->alpha == 0)) {
HXLINE( 850)			return;
            		}
HXLINE( 852)		bool _hx_tmp;
HXDLIN( 852)		if ((this->get_percent() > 0)) {
HXLINE( 852)			_hx_tmp = (this->_frontFrame->type != 2);
            		}
            		else {
HXLINE( 852)			_hx_tmp = false;
            		}
HXDLIN( 852)		if (_hx_tmp) {
HXLINE( 854)			int _g = 0;
HXDLIN( 854)			::Array< ::Dynamic> _g1 = this->get_cameras();
HXDLIN( 854)			while((_g < _g1->length)){
HXLINE( 854)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 854)				_g = (_g + 1);
HXLINE( 856)				bool _hx_tmp;
HXDLIN( 856)				bool _hx_tmp1;
HXDLIN( 856)				if (camera->visible) {
HXLINE( 856)					_hx_tmp1 = !(camera->exists);
            				}
            				else {
HXLINE( 856)					_hx_tmp1 = true;
            				}
HXDLIN( 856)				if (!(_hx_tmp1)) {
HXLINE( 856)					_hx_tmp = !(this->isOnScreen(camera));
            				}
            				else {
HXLINE( 856)					_hx_tmp = true;
            				}
HXDLIN( 856)				if (_hx_tmp) {
HXLINE( 858)					continue;
            				}
HXLINE( 861)				{
HXLINE( 861)					 ::flixel::math::FlxBasePoint this1 = this->getScreenPosition(this->_point,camera);
HXDLIN( 861)					 ::flixel::math::FlxBasePoint point = this->offset;
HXDLIN( 861)					{
HXLINE( 861)						Float y = point->y;
HXDLIN( 861)						this1->set_x((this1->x - point->x));
HXDLIN( 861)						this1->set_y((this1->y - y));
            					}
HXDLIN( 861)					if (point->_weak) {
HXLINE( 861)						point->put();
            					}
            				}
HXLINE( 863)				this->_frontFrame->prepareMatrix(this->_matrix,0,this->flipX,this->flipY);
HXLINE( 864)				this->_matrix->translate(-(this->origin->x),-(this->origin->y));
HXLINE( 865)				this->_matrix->scale(this->scale->x,this->scale->y);
HXLINE( 868)				if ((this->angle != 0)) {
HXLINE( 870)					 ::flixel::math::FlxMatrix _this = this->_matrix;
HXDLIN( 870)					Float cos = this->_cosAngle;
HXDLIN( 870)					Float sin = this->_sinAngle;
HXDLIN( 870)					Float a1 = ((_this->a * cos) - (_this->b * sin));
HXDLIN( 870)					_this->b = ((_this->a * sin) + (_this->b * cos));
HXDLIN( 870)					_this->a = a1;
HXDLIN( 870)					Float c1 = ((_this->c * cos) - (_this->d * sin));
HXDLIN( 870)					_this->d = ((_this->c * sin) + (_this->d * cos));
HXDLIN( 870)					_this->c = c1;
HXDLIN( 870)					Float tx1 = ((_this->tx * cos) - (_this->ty * sin));
HXDLIN( 870)					_this->ty = ((_this->tx * sin) + (_this->ty * cos));
HXDLIN( 870)					_this->tx = tx1;
            				}
HXLINE( 873)				{
HXLINE( 873)					 ::flixel::math::FlxBasePoint this2 = this->_point;
HXDLIN( 873)					Float y1 = this->origin->y;
HXDLIN( 873)					this2->set_x((this2->x + this->origin->x));
HXDLIN( 873)					this2->set_y((this2->y + y1));
            				}
HXLINE( 874)				if (this->isPixelPerfectRender(camera)) {
HXLINE( 876)					 ::flixel::math::FlxBasePoint this1 = this->_point;
HXDLIN( 876)					this1->set_x(( (Float)(::Math_obj::floor(this1->x)) ));
HXDLIN( 876)					this1->set_y(( (Float)(::Math_obj::floor(this1->y)) ));
            				}
HXLINE( 879)				this->_matrix->translate(this->_point->x,this->_point->y);
HXLINE( 880)				camera->drawPixels(this->_frontFrame,null(),this->_matrix,this->colorTransform,this->blend,this->antialiasing,this->shader);
            			}
            		}
            	}


 ::openfl::display::BitmapData FlxBar_obj::set_pixels( ::openfl::display::BitmapData Pixels){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_887_set_pixels)
HXDLIN( 887)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 889)			return Pixels;
            		}
            		else {
HXLINE( 893)			return this->super::set_pixels(Pixels);
            		}
HXLINE( 887)		return null();
            	}


::String FlxBar_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_899_toString)
HXLINE( 900)		 ::Dynamic value = this->min;
HXDLIN( 900)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 900)		_this->label = HX_("min",92,11,53,00);
HXDLIN( 900)		_this->value = value;
HXLINE( 901)		 ::Dynamic value1 = this->max;
HXDLIN( 901)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 901)		_this1->label = HX_("max",a4,0a,53,00);
HXDLIN( 901)		_this1->value = value1;
HXLINE( 902)		 ::Dynamic value2 = this->range;
HXDLIN( 902)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 902)		_this2->label = HX_("range",bd,a5,1f,e4);
HXDLIN( 902)		_this2->value = value2;
HXLINE( 903)		 ::Dynamic value3 = this->pct;
HXDLIN( 903)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 903)		_this3->label = HX_("%",25,00,00,00);
HXDLIN( 903)		_this3->value = value3;
HXLINE( 904)		 ::Dynamic value4 = this->pxPerPercent;
HXDLIN( 904)		 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 904)		_this4->label = HX_("px/%",1e,1d,63,4a);
HXDLIN( 904)		_this4->value = value4;
HXLINE( 905)		 ::Dynamic value5 = this->get_value();
HXDLIN( 905)		 ::flixel::util::LabelValuePair _this5 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 905)		_this5->label = HX_("value",71,7f,b8,31);
HXDLIN( 905)		_this5->value = value5;
HXLINE( 899)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(6)->init(0,_this)->init(1,_this1)->init(2,_this2)->init(3,_this3)->init(4,_this4)->init(5,_this5));
            	}


Float FlxBar_obj::get_percent(){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_910_get_percent)
HXLINE( 911)		Float _hx_tmp = this->get_value();
HXDLIN( 911)		if ((_hx_tmp > this->max)) {
HXLINE( 913)			return ( (Float)(this->_maxPercent) );
            		}
HXLINE( 916)		Float _hx_tmp1 = this->get_value();
HXDLIN( 916)		return ( (Float)(::Math_obj::floor((((_hx_tmp1 - this->min) / this->range) * ( (Float)(this->_maxPercent) )))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_percent,return )

Float FlxBar_obj::set_percent(Float newPct){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_920_set_percent)
HXLINE( 921)		bool _hx_tmp;
HXDLIN( 921)		if ((newPct >= 0)) {
HXLINE( 921)			_hx_tmp = (newPct <= this->_maxPercent);
            		}
            		else {
HXLINE( 921)			_hx_tmp = false;
            		}
HXDLIN( 921)		if (_hx_tmp) {
HXLINE( 923)			this->set_value((this->pct * newPct));
            		}
HXLINE( 925)		return newPct;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_percent,return )

Float FlxBar_obj::set_value(Float newValue){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_929_set_value)
HXLINE( 930)		this->value = ::Math_obj::max(this->min,::Math_obj::min(newValue,this->max));
HXLINE( 932)		bool _hx_tmp;
HXDLIN( 932)		Float _hx_tmp1 = this->get_value();
HXDLIN( 932)		if ((_hx_tmp1 == this->min)) {
HXLINE( 932)			_hx_tmp = ::hx::IsNotNull( this->emptyCallback );
            		}
            		else {
HXLINE( 932)			_hx_tmp = false;
            		}
HXDLIN( 932)		if (_hx_tmp) {
HXLINE( 934)			this->emptyCallback();
            		}
HXLINE( 937)		bool _hx_tmp2;
HXDLIN( 937)		Float _hx_tmp3 = this->get_value();
HXDLIN( 937)		if ((_hx_tmp3 == this->max)) {
HXLINE( 937)			_hx_tmp2 = ::hx::IsNotNull( this->filledCallback );
            		}
            		else {
HXLINE( 937)			_hx_tmp2 = false;
            		}
HXDLIN( 937)		if (_hx_tmp2) {
HXLINE( 939)			this->filledCallback();
            		}
HXLINE( 942)		bool _hx_tmp4;
HXDLIN( 942)		Float _hx_tmp5 = this->get_value();
HXDLIN( 942)		if ((_hx_tmp5 == this->min)) {
HXLINE( 942)			_hx_tmp4 = this->killOnEmpty;
            		}
            		else {
HXLINE( 942)			_hx_tmp4 = false;
            		}
HXDLIN( 942)		if (_hx_tmp4) {
HXLINE( 944)			this->kill();
            		}
HXLINE( 947)		this->updateBar();
HXLINE( 948)		return newValue;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_value,return )

Float FlxBar_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_960_get_value)
HXDLIN( 960)		return this->value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_value,return )

int FlxBar_obj::set_numDivisions(int newValue){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_964_set_numDivisions)
HXLINE( 965)		int _hx_tmp;
HXDLIN( 965)		if ((newValue > 0)) {
HXLINE( 965)			_hx_tmp = newValue;
            		}
            		else {
HXLINE( 965)			_hx_tmp = 100;
            		}
HXDLIN( 965)		this->numDivisions = _hx_tmp;
HXLINE( 966)		this->updateFilledBar();
HXLINE( 967)		return newValue;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_numDivisions,return )

 ::flixel::graphics::frames::FlxImageFrame FlxBar_obj::get_frontFrames(){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_971_get_frontFrames)
HXLINE( 972)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 974)			return this->frontFrames;
            		}
HXLINE( 976)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_frontFrames,return )

 ::flixel::graphics::frames::FlxImageFrame FlxBar_obj::set_frontFrames( ::flixel::graphics::frames::FlxImageFrame value){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_980_set_frontFrames)
HXLINE( 981)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 983)			this->frontFrames = value;
HXLINE( 984)			 ::flixel::graphics::frames::FlxFrame _hx_tmp;
HXDLIN( 984)			if (::hx::IsNotNull( value )) {
HXLINE( 984)				_hx_tmp = value->get_frame()->copyTo(this->_frontFrame);
            			}
            			else {
HXLINE( 984)				_hx_tmp = null();
            			}
HXDLIN( 984)			this->_frontFrame = _hx_tmp;
            		}
            		else {
HXLINE( 988)			this->createImageFilledBar(value->get_frame()->paint(null(),null(),null(),null()),null());
            		}
HXLINE( 990)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_frontFrames,return )

 ::flixel::graphics::frames::FlxImageFrame FlxBar_obj::get_backFrames(){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_994_get_backFrames)
HXLINE( 995)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 997)			return ( ( ::flixel::graphics::frames::FlxImageFrame)(this->frames) );
            		}
HXLINE( 999)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_backFrames,return )

 ::flixel::graphics::frames::FlxImageFrame FlxBar_obj::set_backFrames( ::flixel::graphics::frames::FlxImageFrame value){
            	HX_STACKFRAME(&_hx_pos_29953dbeb33e4775_1003_set_backFrames)
HXLINE(1004)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1006)			this->set_frames(value);
            		}
            		else {
HXLINE(1010)			this->createImageEmptyBar(value->get_frame()->paint(null(),null(),null(),null()),null());
            		}
HXLINE(1012)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_backFrames,return )


::hx::ObjectPtr< FlxBar_obj > FlxBar_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::flixel::ui::FlxBarFillDirection direction,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic parentRef,::String __o_variable,::hx::Null< Float >  __o_min,::hx::Null< Float >  __o_max,::hx::Null< bool >  __o_showBorder) {
	::hx::ObjectPtr< FlxBar_obj > __this = new FlxBar_obj();
	__this->__construct(__o_x,__o_y,direction,__o_width,__o_height,parentRef,__o_variable,__o_min,__o_max,__o_showBorder);
	return __this;
}

::hx::ObjectPtr< FlxBar_obj > FlxBar_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::flixel::ui::FlxBarFillDirection direction,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic parentRef,::String __o_variable,::hx::Null< Float >  __o_min,::hx::Null< Float >  __o_max,::hx::Null< bool >  __o_showBorder) {
	FlxBar_obj *__this = (FlxBar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBar_obj), true, "flixel.ui.FlxBar"));
	*(void **)__this = FlxBar_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,direction,__o_width,__o_height,parentRef,__o_variable,__o_min,__o_max,__o_showBorder);
	return __this;
}

FlxBar_obj::FlxBar_obj()
{
}

void FlxBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBar);
	HX_MARK_MEMBER_NAME(fixedPosition,"fixedPosition");
	HX_MARK_MEMBER_NAME(pxPerPercent,"pxPerPercent");
	HX_MARK_MEMBER_NAME(positionOffset,"positionOffset");
	HX_MARK_MEMBER_NAME(killOnEmpty,"killOnEmpty");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(range,"range");
	HX_MARK_MEMBER_NAME(pct,"pct");
	HX_MARK_MEMBER_NAME(numDivisions,"numDivisions");
	HX_MARK_MEMBER_NAME(emptyCallback,"emptyCallback");
	HX_MARK_MEMBER_NAME(filledCallback,"filledCallback");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(parentVariable,"parentVariable");
	HX_MARK_MEMBER_NAME(barWidth,"barWidth");
	HX_MARK_MEMBER_NAME(barHeight,"barHeight");
	HX_MARK_MEMBER_NAME(frontFrames,"frontFrames");
	HX_MARK_MEMBER_NAME(fillDirection,"fillDirection");
	HX_MARK_MEMBER_NAME(_fillHorizontal,"_fillHorizontal");
	HX_MARK_MEMBER_NAME(_frontFrame,"_frontFrame");
	HX_MARK_MEMBER_NAME(_filledFlxRect,"_filledFlxRect");
	HX_MARK_MEMBER_NAME(_emptyBar,"_emptyBar");
	HX_MARK_MEMBER_NAME(_emptyBarRect,"_emptyBarRect");
	HX_MARK_MEMBER_NAME(_filledBar,"_filledBar");
	HX_MARK_MEMBER_NAME(_zeroOffset,"_zeroOffset");
	HX_MARK_MEMBER_NAME(_filledBarRect,"_filledBarRect");
	HX_MARK_MEMBER_NAME(_filledBarPoint,"_filledBarPoint");
	HX_MARK_MEMBER_NAME(_maxPercent,"_maxPercent");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixedPosition,"fixedPosition");
	HX_VISIT_MEMBER_NAME(pxPerPercent,"pxPerPercent");
	HX_VISIT_MEMBER_NAME(positionOffset,"positionOffset");
	HX_VISIT_MEMBER_NAME(killOnEmpty,"killOnEmpty");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(range,"range");
	HX_VISIT_MEMBER_NAME(pct,"pct");
	HX_VISIT_MEMBER_NAME(numDivisions,"numDivisions");
	HX_VISIT_MEMBER_NAME(emptyCallback,"emptyCallback");
	HX_VISIT_MEMBER_NAME(filledCallback,"filledCallback");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(parentVariable,"parentVariable");
	HX_VISIT_MEMBER_NAME(barWidth,"barWidth");
	HX_VISIT_MEMBER_NAME(barHeight,"barHeight");
	HX_VISIT_MEMBER_NAME(frontFrames,"frontFrames");
	HX_VISIT_MEMBER_NAME(fillDirection,"fillDirection");
	HX_VISIT_MEMBER_NAME(_fillHorizontal,"_fillHorizontal");
	HX_VISIT_MEMBER_NAME(_frontFrame,"_frontFrame");
	HX_VISIT_MEMBER_NAME(_filledFlxRect,"_filledFlxRect");
	HX_VISIT_MEMBER_NAME(_emptyBar,"_emptyBar");
	HX_VISIT_MEMBER_NAME(_emptyBarRect,"_emptyBarRect");
	HX_VISIT_MEMBER_NAME(_filledBar,"_filledBar");
	HX_VISIT_MEMBER_NAME(_zeroOffset,"_zeroOffset");
	HX_VISIT_MEMBER_NAME(_filledBarRect,"_filledBarRect");
	HX_VISIT_MEMBER_NAME(_filledBarPoint,"_filledBarPoint");
	HX_VISIT_MEMBER_NAME(_maxPercent,"_maxPercent");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxBar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return ::hx::Val( min ); }
		if (HX_FIELD_EQ(inName,"max") ) { return ::hx::Val( max ); }
		if (HX_FIELD_EQ(inName,"pct") ) { return ::hx::Val( pct ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_value() : value ); }
		if (HX_FIELD_EQ(inName,"range") ) { return ::hx::Val( range ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_percent() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barWidth") ) { return ::hx::Val( barWidth ); }
		if (HX_FIELD_EQ(inName,"setRange") ) { return ::hx::Val( setRange_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"barHeight") ) { return ::hx::Val( barHeight ); }
		if (HX_FIELD_EQ(inName,"_emptyBar") ) { return ::hx::Val( _emptyBar ); }
		if (HX_FIELD_EQ(inName,"setParent") ) { return ::hx::Val( setParent_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateBar") ) { return ::hx::Val( updateBar_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backFrames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backFrames() ); }
		if (HX_FIELD_EQ(inName,"_filledBar") ) { return ::hx::Val( _filledBar ); }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return ::hx::Val( set_pixels_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"killOnEmpty") ) { return ::hx::Val( killOnEmpty ); }
		if (HX_FIELD_EQ(inName,"frontFrames") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_frontFrames() : frontFrames ); }
		if (HX_FIELD_EQ(inName,"_frontFrame") ) { return ::hx::Val( _frontFrame ); }
		if (HX_FIELD_EQ(inName,"_zeroOffset") ) { return ::hx::Val( _zeroOffset ); }
		if (HX_FIELD_EQ(inName,"_maxPercent") ) { return ::hx::Val( _maxPercent ); }
		if (HX_FIELD_EQ(inName,"trackParent") ) { return ::hx::Val( trackParent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_percent") ) { return ::hx::Val( get_percent_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percent") ) { return ::hx::Val( set_percent_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pxPerPercent") ) { return ::hx::Val( pxPerPercent ); }
		if (HX_FIELD_EQ(inName,"numDivisions") ) { return ::hx::Val( numDivisions ); }
		if (HX_FIELD_EQ(inName,"setCallbacks") ) { return ::hx::Val( setCallbacks_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedPosition") ) { return ::hx::Val( fixedPosition ); }
		if (HX_FIELD_EQ(inName,"emptyCallback") ) { return ::hx::Val( emptyCallback ); }
		if (HX_FIELD_EQ(inName,"fillDirection") ) { return ::hx::Val( fillDirection ); }
		if (HX_FIELD_EQ(inName,"_emptyBarRect") ) { return ::hx::Val( _emptyBarRect ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"positionOffset") ) { return ::hx::Val( positionOffset ); }
		if (HX_FIELD_EQ(inName,"filledCallback") ) { return ::hx::Val( filledCallback ); }
		if (HX_FIELD_EQ(inName,"parentVariable") ) { return ::hx::Val( parentVariable ); }
		if (HX_FIELD_EQ(inName,"_filledFlxRect") ) { return ::hx::Val( _filledFlxRect ); }
		if (HX_FIELD_EQ(inName,"_filledBarRect") ) { return ::hx::Val( _filledBarRect ); }
		if (HX_FIELD_EQ(inName,"createImageBar") ) { return ::hx::Val( createImageBar_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateEmptyBar") ) { return ::hx::Val( updateEmptyBar_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backFrames") ) { return ::hx::Val( get_backFrames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backFrames") ) { return ::hx::Val( set_backFrames_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fillHorizontal") ) { return ::hx::Val( _fillHorizontal ); }
		if (HX_FIELD_EQ(inName,"_filledBarPoint") ) { return ::hx::Val( _filledBarPoint ); }
		if (HX_FIELD_EQ(inName,"createFilledBar") ) { return ::hx::Val( createFilledBar_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateFilledBar") ) { return ::hx::Val( updateFilledBar_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_frontFrames") ) { return ::hx::Val( get_frontFrames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frontFrames") ) { return ::hx::Val( set_frontFrames_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_numDivisions") ) { return ::hx::Val( set_numDivisions_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBar") ) { return ::hx::Val( createGradientBar_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fillDirection") ) { return ::hx::Val( set_fillDirection_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stopTrackingParent") ) { return ::hx::Val( stopTrackingParent_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createImageEmptyBar") ) { return ::hx::Val( createImageEmptyBar_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createImageFilledBar") ) { return ::hx::Val( createImageFilledBar_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createColoredEmptyBar") ) { return ::hx::Val( createColoredEmptyBar_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateValueFromParent") ) { return ::hx::Val( updateValueFromParent_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createColoredFilledBar") ) { return ::hx::Val( createColoredFilledBar_dyn() ); }
		if (HX_FIELD_EQ(inName,"createGradientEmptyBar") ) { return ::hx::Val( createGradientEmptyBar_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createGradientFilledBar") ) { return ::hx::Val( createGradientFilledBar_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxBar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pct") ) { pct=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_value(inValue.Cast< Float >()) );value=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"range") ) { range=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percent(inValue.Cast< Float >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barWidth") ) { barWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"barHeight") ) { barHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_emptyBar") ) { _emptyBar=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backFrames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backFrames(inValue.Cast<  ::flixel::graphics::frames::FlxImageFrame >()) ); }
		if (HX_FIELD_EQ(inName,"_filledBar") ) { _filledBar=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"killOnEmpty") ) { killOnEmpty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frontFrames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frontFrames(inValue.Cast<  ::flixel::graphics::frames::FlxImageFrame >()) );frontFrames=inValue.Cast<  ::flixel::graphics::frames::FlxImageFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frontFrame") ) { _frontFrame=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_zeroOffset") ) { _zeroOffset=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxPercent") ) { _maxPercent=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pxPerPercent") ) { pxPerPercent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numDivisions") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_numDivisions(inValue.Cast< int >()) );numDivisions=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedPosition") ) { fixedPosition=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyCallback") ) { emptyCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillDirection") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fillDirection(inValue.Cast<  ::flixel::ui::FlxBarFillDirection >()) );fillDirection=inValue.Cast<  ::flixel::ui::FlxBarFillDirection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_emptyBarRect") ) { _emptyBarRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"positionOffset") ) { positionOffset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filledCallback") ) { filledCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parentVariable") ) { parentVariable=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filledFlxRect") ) { _filledFlxRect=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filledBarRect") ) { _filledBarRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fillHorizontal") ) { _fillHorizontal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filledBarPoint") ) { _filledBarPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fixedPosition",3d,ea,d2,12));
	outFields->push(HX_("pxPerPercent",90,c3,28,3b));
	outFields->push(HX_("positionOffset",1c,11,32,b5));
	outFields->push(HX_("killOnEmpty",f0,70,0b,ae));
	outFields->push(HX_("percent",c5,aa,da,78));
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("min",92,11,53,00));
	outFields->push(HX_("max",a4,0a,53,00));
	outFields->push(HX_("range",bd,a5,1f,e4));
	outFields->push(HX_("pct",21,53,55,00));
	outFields->push(HX_("numDivisions",80,33,9c,26));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("parentVariable",86,0d,e5,30));
	outFields->push(HX_("barWidth",33,f7,30,99));
	outFields->push(HX_("barHeight",1a,ce,f6,27));
	outFields->push(HX_("frontFrames",2f,a1,f5,bc));
	outFields->push(HX_("backFrames",2d,95,0f,eb));
	outFields->push(HX_("fillDirection",3c,0b,89,f1));
	outFields->push(HX_("_fillHorizontal",e6,79,6f,9d));
	outFields->push(HX_("_frontFrame",e3,97,e5,05));
	outFields->push(HX_("_filledFlxRect",75,41,ba,ea));
	outFields->push(HX_("_emptyBar",a5,7c,c1,6f));
	outFields->push(HX_("_emptyBarRect",69,ac,cd,cb));
	outFields->push(HX_("_filledBar",12,89,e0,00));
	outFields->push(HX_("_zeroOffset",fa,b5,5e,c4));
	outFields->push(HX_("_filledBarRect",56,f3,0f,6a));
	outFields->push(HX_("_filledBarPoint",de,79,b8,43));
	outFields->push(HX_("_maxPercent",a0,f1,88,b5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxBar_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxBar_obj,fixedPosition),HX_("fixedPosition",3d,ea,d2,12)},
	{::hx::fsFloat,(int)offsetof(FlxBar_obj,pxPerPercent),HX_("pxPerPercent",90,c3,28,3b)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxBar_obj,positionOffset),HX_("positionOffset",1c,11,32,b5)},
	{::hx::fsBool,(int)offsetof(FlxBar_obj,killOnEmpty),HX_("killOnEmpty",f0,70,0b,ae)},
	{::hx::fsFloat,(int)offsetof(FlxBar_obj,value),HX_("value",71,7f,b8,31)},
	{::hx::fsFloat,(int)offsetof(FlxBar_obj,min),HX_("min",92,11,53,00)},
	{::hx::fsFloat,(int)offsetof(FlxBar_obj,max),HX_("max",a4,0a,53,00)},
	{::hx::fsFloat,(int)offsetof(FlxBar_obj,range),HX_("range",bd,a5,1f,e4)},
	{::hx::fsFloat,(int)offsetof(FlxBar_obj,pct),HX_("pct",21,53,55,00)},
	{::hx::fsInt,(int)offsetof(FlxBar_obj,numDivisions),HX_("numDivisions",80,33,9c,26)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxBar_obj,emptyCallback),HX_("emptyCallback",72,65,53,13)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxBar_obj,filledCallback),HX_("filledCallback",87,d5,00,e4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxBar_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsString,(int)offsetof(FlxBar_obj,parentVariable),HX_("parentVariable",86,0d,e5,30)},
	{::hx::fsInt,(int)offsetof(FlxBar_obj,barWidth),HX_("barWidth",33,f7,30,99)},
	{::hx::fsInt,(int)offsetof(FlxBar_obj,barHeight),HX_("barHeight",1a,ce,f6,27)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxImageFrame */ ,(int)offsetof(FlxBar_obj,frontFrames),HX_("frontFrames",2f,a1,f5,bc)},
	{::hx::fsObject /*  ::flixel::ui::FlxBarFillDirection */ ,(int)offsetof(FlxBar_obj,fillDirection),HX_("fillDirection",3c,0b,89,f1)},
	{::hx::fsBool,(int)offsetof(FlxBar_obj,_fillHorizontal),HX_("_fillHorizontal",e6,79,6f,9d)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(FlxBar_obj,_frontFrame),HX_("_frontFrame",e3,97,e5,05)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxBar_obj,_filledFlxRect),HX_("_filledFlxRect",75,41,ba,ea)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxBar_obj,_emptyBar),HX_("_emptyBar",a5,7c,c1,6f)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxBar_obj,_emptyBarRect),HX_("_emptyBarRect",69,ac,cd,cb)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxBar_obj,_filledBar),HX_("_filledBar",12,89,e0,00)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxBar_obj,_zeroOffset),HX_("_zeroOffset",fa,b5,5e,c4)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxBar_obj,_filledBarRect),HX_("_filledBarRect",56,f3,0f,6a)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxBar_obj,_filledBarPoint),HX_("_filledBarPoint",de,79,b8,43)},
	{::hx::fsInt,(int)offsetof(FlxBar_obj,_maxPercent),HX_("_maxPercent",a0,f1,88,b5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxBar_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxBar_obj_sMemberFields[] = {
	HX_("fixedPosition",3d,ea,d2,12),
	HX_("pxPerPercent",90,c3,28,3b),
	HX_("positionOffset",1c,11,32,b5),
	HX_("killOnEmpty",f0,70,0b,ae),
	HX_("value",71,7f,b8,31),
	HX_("min",92,11,53,00),
	HX_("max",a4,0a,53,00),
	HX_("range",bd,a5,1f,e4),
	HX_("pct",21,53,55,00),
	HX_("numDivisions",80,33,9c,26),
	HX_("emptyCallback",72,65,53,13),
	HX_("filledCallback",87,d5,00,e4),
	HX_("parent",2a,05,7e,ed),
	HX_("parentVariable",86,0d,e5,30),
	HX_("barWidth",33,f7,30,99),
	HX_("barHeight",1a,ce,f6,27),
	HX_("frontFrames",2f,a1,f5,bc),
	HX_("fillDirection",3c,0b,89,f1),
	HX_("_fillHorizontal",e6,79,6f,9d),
	HX_("_frontFrame",e3,97,e5,05),
	HX_("_filledFlxRect",75,41,ba,ea),
	HX_("_emptyBar",a5,7c,c1,6f),
	HX_("_emptyBarRect",69,ac,cd,cb),
	HX_("_filledBar",12,89,e0,00),
	HX_("_zeroOffset",fa,b5,5e,c4),
	HX_("_filledBarRect",56,f3,0f,6a),
	HX_("_filledBarPoint",de,79,b8,43),
	HX_("_maxPercent",a0,f1,88,b5),
	HX_("destroy",fa,2c,86,24),
	HX_("trackParent",15,02,78,95),
	HX_("setParent",6c,7a,25,4d),
	HX_("stopTrackingParent",63,e7,80,2a),
	HX_("setCallbacks",0c,b3,0f,cb),
	HX_("setRange",bb,0e,54,f2),
	HX_("createFilledBar",b5,c6,32,46),
	HX_("createColoredEmptyBar",4c,98,6a,af),
	HX_("createColoredFilledBar",8b,9f,2f,75),
	HX_("createGradientBar",27,e0,c0,25),
	HX_("createGradientEmptyBar",72,e6,88,77),
	HX_("createGradientFilledBar",a5,b2,95,c7),
	HX_("createImageBar",54,94,67,d6),
	HX_("createImageEmptyBar",25,ef,24,e8),
	HX_("createImageFilledBar",92,46,81,df),
	HX_("set_fillDirection",9f,ee,66,1b),
	HX_("updateValueFromParent",fc,58,ec,a5),
	HX_("updateBar",4a,8f,d7,82),
	HX_("updateEmptyBar",6f,78,55,5d),
	HX_("updateFilledBar",08,de,c8,f4),
	HX_("update",09,86,05,87),
	HX_("draw",04,2c,70,42),
	HX_("set_pixels",6a,fd,ae,80),
	HX_("toString",ac,d0,6e,38),
	HX_("get_percent",dc,0a,d5,fe),
	HX_("set_percent",e8,11,42,09),
	HX_("set_value",d4,c7,b2,58),
	HX_("get_value",c8,db,61,75),
	HX_("set_numDivisions",7d,0d,7d,81),
	HX_("get_frontFrames",c6,58,d7,7d),
	HX_("set_frontFrames",d2,d5,a2,79),
	HX_("get_backFrames",76,1d,05,61),
	HX_("set_backFrames",ea,05,25,81),
	::String(null()) };

::hx::Class FlxBar_obj::__mClass;

void FlxBar_obj::__register()
{
	FlxBar_obj _hx_dummy;
	FlxBar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.ui.FlxBar",e9,e6,0d,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxBar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxBar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace ui
