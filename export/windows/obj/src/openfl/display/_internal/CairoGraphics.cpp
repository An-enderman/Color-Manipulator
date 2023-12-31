#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandType
#include <openfl/display/_internal/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl_display__internal_ShaderBuffer
#include <openfl/display/_internal/ShaderBuffer.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_61_closePath,"openfl.display._internal.CairoGraphics","closePath",0x1c630b46,"openfl.display._internal.CairoGraphics.closePath","openfl/display/_internal/CairoGraphics.hx",61,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_85_createGradientPattern,"openfl.display._internal.CairoGraphics","createGradientPattern",0x2e8d9ded,"openfl.display._internal.CairoGraphics.createGradientPattern","openfl/display/_internal/CairoGraphics.hx",85,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_158_createImagePattern,"openfl.display._internal.CairoGraphics","createImagePattern",0xd4969668,"openfl.display._internal.CairoGraphics.createImagePattern","openfl/display/_internal/CairoGraphics.hx",158,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_173_drawRoundRect,"openfl.display._internal.CairoGraphics","drawRoundRect",0x0d2e8237,"openfl.display._internal.CairoGraphics.drawRoundRect","openfl/display/_internal/CairoGraphics.hx",173,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_205_endFill,"openfl.display._internal.CairoGraphics","endFill",0xd8fcf987,"openfl.display._internal.CairoGraphics.endFill","openfl/display/_internal/CairoGraphics.hx",205,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_212_endStroke,"openfl.display._internal.CairoGraphics","endStroke",0x5959a7bc,"openfl.display._internal.CairoGraphics.endStroke","openfl/display/_internal/CairoGraphics.hx",212,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_221_hitTest,"openfl.display._internal.CairoGraphics","hitTest",0x959bd1ce,"openfl.display._internal.CairoGraphics.hitTest","openfl/display/_internal/CairoGraphics.hx",221,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_430_isCCW,"openfl.display._internal.CairoGraphics","isCCW",0x84e15156,"openfl.display._internal.CairoGraphics.isCCW","openfl/display/_internal/CairoGraphics.hx",430,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_434_normalizeUVT,"openfl.display._internal.CairoGraphics","normalizeUVT",0xe93d673d,"openfl.display._internal.CairoGraphics.normalizeUVT","openfl/display/_internal/CairoGraphics.hx",434,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_475_playCommands,"openfl.display._internal.CairoGraphics","playCommands",0xebfd0cb3,"openfl.display._internal.CairoGraphics.playCommands","openfl/display/_internal/CairoGraphics.hx",475,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_1119_quadraticCurveTo,"openfl.display._internal.CairoGraphics","quadraticCurveTo",0x52eadd69,"openfl.display._internal.CairoGraphics.quadraticCurveTo","openfl/display/_internal/CairoGraphics.hx",1119,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_1142_render,"openfl.display._internal.CairoGraphics","render",0x66653ded,"openfl.display._internal.CairoGraphics.render","openfl/display/_internal/CairoGraphics.hx",1142,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_1445_renderMask,"openfl.display._internal.CairoGraphics","renderMask",0x176ea579,"openfl.display._internal.CairoGraphics.renderMask","openfl/display/_internal/CairoGraphics.hx",1445,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_36_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",36,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_39_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",39,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_40_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",40,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_46_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",46,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_55_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",55,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_57_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",57,0x56494baa)
namespace openfl{
namespace display{
namespace _internal{

void CairoGraphics_obj::__construct() { }

Dynamic CairoGraphics_obj::__CreateEmpty() { return new CairoGraphics_obj; }

void *CairoGraphics_obj::_hx_vtable = 0;

Dynamic CairoGraphics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoGraphics_obj > _hx_result = new CairoGraphics_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoGraphics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3a660be9;
}

Float CairoGraphics_obj::SIN45;

Float CairoGraphics_obj::TAN22;

bool CairoGraphics_obj::allowSmoothing;

 ::openfl::display::BitmapData CairoGraphics_obj::bitmapFill;

bool CairoGraphics_obj::bitmapRepeat;

 ::openfl::geom::Rectangle CairoGraphics_obj::bounds;

 ::lime::graphics::cairo::Cairo CairoGraphics_obj::cairo;

 ::openfl::display::_internal::DrawCommandBuffer CairoGraphics_obj::fillCommands;

 ::Dynamic CairoGraphics_obj::fillPattern;

 ::openfl::geom::Matrix CairoGraphics_obj::fillPatternMatrix;

 ::openfl::display::Graphics CairoGraphics_obj::graphics;

bool CairoGraphics_obj::hasFill;

bool CairoGraphics_obj::hasStroke;

bool CairoGraphics_obj::hitTesting;

 ::openfl::geom::Matrix CairoGraphics_obj::inversePendingMatrix;

 ::openfl::geom::Matrix CairoGraphics_obj::pendingMatrix;

 ::openfl::display::_internal::DrawCommandBuffer CairoGraphics_obj::strokeCommands;

 ::Dynamic CairoGraphics_obj::strokePattern;

 ::lime::math::Matrix3 CairoGraphics_obj::tempMatrix3;

Float CairoGraphics_obj::worldAlpha;

void CairoGraphics_obj::closePath(::hx::Null< bool >  __o_strokeBefore){
            		bool strokeBefore = __o_strokeBefore.Default(false);
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_61_closePath)
HXLINE(  62)		if (::hx::IsNull( ::openfl::display::_internal::CairoGraphics_obj::strokePattern )) {
HXLINE(  64)			return;
            		}
HXLINE(  67)		if (!(strokeBefore)) {
HXLINE(  69)			::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
            		}
HXLINE(  72)		::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::strokePattern);
HXLINE(  73)		if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(  73)			::openfl::display::_internal::CairoGraphics_obj::cairo->strokePreserve();
            		}
HXLINE(  75)		if (strokeBefore) {
HXLINE(  77)			::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
            		}
HXLINE(  80)		::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoGraphics_obj,closePath,(void))

 ::Dynamic CairoGraphics_obj::createGradientPattern( ::Dynamic type,::cpp::VirtualArray colors,::cpp::VirtualArray alphas,::cpp::VirtualArray ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_85_createGradientPattern)
HXLINE(  86)		 ::Dynamic pattern = null();
HXDLIN(  86)		 ::openfl::geom::Point point = null();
HXDLIN(  86)		 ::openfl::geom::Point point2 = null();
HXDLIN(  86)		bool releaseMatrix = false;
HXLINE(  91)		if (::hx::IsNull( matrix )) {
HXLINE(  93)			matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(  94)			releaseMatrix = true;
            		}
HXLINE(  97)		 ::Dynamic _hx_switch_0 = type;
            		if (  (_hx_switch_0==0) ){
HXLINE( 110)			point = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 111)			point->setTo(((Float)-819.2),( (Float)(0) ));
HXLINE( 112)			{
HXLINE( 112)				Float px = point->x;
HXDLIN( 112)				Float py = point->y;
HXDLIN( 112)				point->x = (((px * matrix->a) + (py * matrix->c)) + matrix->tx);
HXDLIN( 112)				point->y = (((px * matrix->b) + (py * matrix->d)) + matrix->ty);
            			}
HXLINE( 114)			point2 = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 115)			point2->setTo(((Float)819.2),( (Float)(0) ));
HXLINE( 116)			{
HXLINE( 116)				Float px1 = point2->x;
HXDLIN( 116)				Float py1 = point2->y;
HXDLIN( 116)				point2->x = (((px1 * matrix->a) + (py1 * matrix->c)) + matrix->tx);
HXDLIN( 116)				point2->y = (((px1 * matrix->b) + (py1 * matrix->d)) + matrix->ty);
            			}
HXLINE( 118)			 ::openfl::geom::Point point1 = point;
HXDLIN( 118)			point1->x = (point1->x + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->x);
HXLINE( 119)			 ::openfl::geom::Point point21 = point2;
HXDLIN( 119)			point21->x = (point21->x + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->x);
HXLINE( 120)			 ::openfl::geom::Point point3 = point;
HXDLIN( 120)			point3->y = (point3->y + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->y);
HXLINE( 121)			 ::openfl::geom::Point point22 = point2;
HXDLIN( 121)			point22->y = (point22->y + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->y);
HXLINE( 123)			pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createLinear(point->x,point->y,point2->x,point2->y);
HXLINE( 109)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE( 100)			point = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 101)			point->setTo(((Float)1638.4),( (Float)(0) ));
HXLINE( 102)			{
HXLINE( 102)				Float px = point->x;
HXDLIN( 102)				Float py = point->y;
HXDLIN( 102)				point->x = (((px * matrix->a) + (py * matrix->c)) + matrix->tx);
HXDLIN( 102)				point->y = (((px * matrix->b) + (py * matrix->d)) + matrix->ty);
            			}
HXLINE( 104)			Float x = (matrix->tx + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->x);
HXLINE( 105)			Float y = (matrix->ty + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->y);
HXLINE( 107)			pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRadial(x,y,( (Float)(0) ),x,y,::Math_obj::abs(((point->x - matrix->tx) / ( (Float)(2) ))));
HXLINE(  99)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
HXLINE( 126)		int rgb;
HXDLIN( 126)		Float alpha;
HXDLIN( 126)		Float r;
HXDLIN( 126)		Float g;
HXDLIN( 126)		Float b;
HXDLIN( 126)		Float ratio;
HXLINE( 128)		{
HXLINE( 128)			int _g = 0;
HXDLIN( 128)			int _g1 = colors->get_length();
HXDLIN( 128)			while((_g < _g1)){
HXLINE( 128)				_g = (_g + 1);
HXDLIN( 128)				int i = (_g - 1);
HXLINE( 130)				rgb = ( (int)(colors->__get(i)) );
HXLINE( 131)				alpha = ( (Float)(alphas->__get(i)) );
HXLINE( 132)				r = (( (Float)(::hx::UShr((rgb & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 133)				g = (( (Float)(::hx::UShr((rgb & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 134)				b = (( (Float)((rgb & 255)) ) / ( (Float)(255) ));
HXLINE( 136)				ratio = (( (Float)(ratios->__get(i)) ) / ( (Float)(255) ));
HXLINE( 137)				if ((ratio < 0)) {
HXLINE( 137)					ratio = ( (Float)(0) );
            				}
HXLINE( 138)				if ((ratio > 1)) {
HXLINE( 138)					ratio = ( (Float)(1) );
            				}
HXLINE( 140)				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::addColorStopRGBA(pattern,ratio,r,g,b,alpha);
            			}
            		}
HXLINE( 143)		if (::hx::IsNotNull( point )) {
HXLINE( 143)			::openfl::geom::Point_obj::_hx___pool->release(point);
            		}
HXLINE( 144)		if (::hx::IsNotNull( point2 )) {
HXLINE( 144)			::openfl::geom::Point_obj::_hx___pool->release(point2);
            		}
HXLINE( 145)		if (releaseMatrix) {
HXLINE( 145)			::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
            		}
HXLINE( 147)		 ::lime::math::Matrix3 mat = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::get_matrix(pattern);
HXLINE( 149)		mat->tx = ::openfl::display::_internal::CairoGraphics_obj::bounds->x;
HXLINE( 150)		mat->ty = ::openfl::display::_internal::CairoGraphics_obj::bounds->y;
HXLINE( 152)		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(pattern,mat);
HXLINE( 154)		return pattern;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(CairoGraphics_obj,createGradientPattern,return )

 ::Dynamic CairoGraphics_obj::createImagePattern( ::openfl::display::BitmapData bitmapFill, ::openfl::geom::Matrix matrix,bool bitmapRepeat,bool smooth){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_158_createImagePattern)
HXLINE( 159)		 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(bitmapFill->getSurface());
HXLINE( 160)		int _hx_tmp;
HXDLIN( 160)		bool _hx_tmp1;
HXDLIN( 160)		if (smooth) {
HXLINE( 160)			_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::allowSmoothing;
            		}
            		else {
HXLINE( 160)			_hx_tmp1 = false;
            		}
HXDLIN( 160)		if (_hx_tmp1) {
HXLINE( 160)			_hx_tmp = 1;
            		}
            		else {
HXLINE( 160)			_hx_tmp = 3;
            		}
HXDLIN( 160)		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXLINE( 162)		if (bitmapRepeat) {
HXLINE( 164)			::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(pattern,1);
            		}
HXLINE( 167)		::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix = matrix;
HXLINE( 169)		return pattern;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,createImagePattern,return )

void CairoGraphics_obj::drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth, ::Dynamic ellipseHeight){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_173_drawRoundRect)
HXLINE( 174)		if (::hx::IsNull( ellipseHeight )) {
HXLINE( 174)			ellipseHeight = ellipseWidth;
            		}
HXLINE( 176)		ellipseWidth = (ellipseWidth * ((Float)0.5));
HXLINE( 177)		ellipseHeight = (ellipseHeight * ((Float)0.5));
HXLINE( 179)		if ((ellipseWidth > (width / ( (Float)(2) )))) {
HXLINE( 179)			ellipseWidth = (width / ( (Float)(2) ));
            		}
HXLINE( 180)		if (::hx::IsGreater( ellipseHeight,(height / ( (Float)(2) )) )) {
HXLINE( 180)			ellipseHeight = (height / ( (Float)(2) ));
            		}
HXLINE( 182)		Float xe = (x + width);
HXDLIN( 182)		Float ye = (y + height);
HXDLIN( 182)		Float cx1 = (-(ellipseWidth) + (ellipseWidth * ::openfl::display::_internal::CairoGraphics_obj::SIN45));
HXDLIN( 182)		Float cx2 = (-(ellipseWidth) + (ellipseWidth * ::openfl::display::_internal::CairoGraphics_obj::TAN22));
HXDLIN( 182)		Float cy1 = (-(ellipseHeight) + (( (Float)(ellipseHeight) ) * ::openfl::display::_internal::CairoGraphics_obj::SIN45));
HXDLIN( 182)		Float cy2 = (-(ellipseHeight) + (( (Float)(ellipseHeight) ) * ::openfl::display::_internal::CairoGraphics_obj::TAN22));
HXLINE( 189)		::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(xe,(ye - ( (Float)(ellipseHeight) )));
HXLINE( 190)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo(xe,(ye + cy2),(xe + cx1),(ye + cy1));
HXLINE( 191)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((xe + cx2),ye,(xe - ellipseWidth),ye);
HXLINE( 192)		::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((x + ellipseWidth),ye);
HXLINE( 193)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((x - cx2),ye,(x - cx1),(ye + cy1));
HXLINE( 194)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo(x,(ye + cy2),x,(ye - ( (Float)(ellipseHeight) )));
HXLINE( 195)		::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x,(y + ellipseHeight));
HXLINE( 196)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo(x,(y - cy2),(x - cx1),(y - cy1));
HXLINE( 197)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((x - cx2),y,(x + ellipseWidth),y);
HXLINE( 198)		::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((xe - ellipseWidth),y);
HXLINE( 199)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((xe + cx2),y,(xe + cx1),(y - cy1));
HXLINE( 200)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo(xe,(y - cy2),xe,(y + ellipseHeight));
HXLINE( 201)		::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(xe,(ye - ( (Float)(ellipseHeight) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,drawRoundRect,(void))

void CairoGraphics_obj::endFill(){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_205_endFill)
HXLINE( 206)		::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 207)		::openfl::display::_internal::CairoGraphics_obj::playCommands(::openfl::display::_internal::CairoGraphics_obj::fillCommands,false);
HXLINE( 208)		::openfl::display::_internal::CairoGraphics_obj::fillCommands->clear();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endFill,(void))

void CairoGraphics_obj::endStroke(){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_212_endStroke)
HXLINE( 213)		::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 214)		::openfl::display::_internal::CairoGraphics_obj::playCommands(::openfl::display::_internal::CairoGraphics_obj::strokeCommands,true);
HXLINE( 215)		::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
HXLINE( 216)		::openfl::display::_internal::CairoGraphics_obj::strokeCommands->clear();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endStroke,(void))

bool CairoGraphics_obj::hitTest( ::openfl::display::Graphics graphics,Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_221_hitTest)
HXLINE( 223)		::openfl::display::_internal::CairoGraphics_obj::graphics = graphics;
HXLINE( 224)		::openfl::display::_internal::CairoGraphics_obj::bounds = graphics->_hx___bounds;
HXLINE( 226)		bool _hx_tmp;
HXDLIN( 226)		bool _hx_tmp1;
HXDLIN( 226)		bool _hx_tmp2;
HXDLIN( 226)		bool _hx_tmp3;
HXDLIN( 226)		if ((graphics->_hx___commands->get_length() != 0)) {
HXLINE( 226)			_hx_tmp3 = ::hx::IsNull( ::openfl::display::_internal::CairoGraphics_obj::bounds );
            		}
            		else {
HXLINE( 226)			_hx_tmp3 = true;
            		}
HXDLIN( 226)		if (!(_hx_tmp3)) {
HXLINE( 226)			_hx_tmp2 = (::openfl::display::_internal::CairoGraphics_obj::bounds->width == 0);
            		}
            		else {
HXLINE( 226)			_hx_tmp2 = true;
            		}
HXDLIN( 226)		if (!(_hx_tmp2)) {
HXLINE( 226)			_hx_tmp1 = (::openfl::display::_internal::CairoGraphics_obj::bounds->height == 0);
            		}
            		else {
HXLINE( 226)			_hx_tmp1 = true;
            		}
HXDLIN( 226)		if (!(_hx_tmp1)) {
HXLINE( 226)			_hx_tmp = !(::openfl::display::_internal::CairoGraphics_obj::bounds->contains(x,y));
            		}
            		else {
HXLINE( 226)			_hx_tmp = true;
            		}
HXDLIN( 226)		if (_hx_tmp) {
HXLINE( 228)			return false;
            		}
            		else {
HXLINE( 232)			::openfl::display::_internal::CairoGraphics_obj::hitTesting = true;
HXLINE( 234)			x = (x - ::openfl::display::_internal::CairoGraphics_obj::bounds->x);
HXLINE( 235)			y = (y - ::openfl::display::_internal::CairoGraphics_obj::bounds->y);
HXLINE( 237)			if (::hx::IsNull( graphics->_hx___cairo )) {
HXLINE( 239)				 ::openfl::display::BitmapData bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,::Math_obj::floor(::Math_obj::max(( (Float)(1) ),::openfl::display::_internal::CairoGraphics_obj::bounds->width)),::Math_obj::floor(::Math_obj::max(( (Float)(1) ),::openfl::display::_internal::CairoGraphics_obj::bounds->height)),true,0);
HXLINE( 240)				 ::Dynamic surface = bitmap->getSurface();
HXLINE( 241)				graphics->_hx___cairo =  ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,surface);
            			}
HXLINE( 245)			::openfl::display::_internal::CairoGraphics_obj::cairo = graphics->_hx___cairo;
HXLINE( 247)			::openfl::display::_internal::CairoGraphics_obj::fillCommands->clear();
HXLINE( 248)			::openfl::display::_internal::CairoGraphics_obj::strokeCommands->clear();
HXLINE( 250)			::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
HXLINE( 251)			::openfl::display::_internal::CairoGraphics_obj::hasStroke = false;
HXLINE( 253)			::openfl::display::_internal::CairoGraphics_obj::fillPattern = null();
HXLINE( 254)			::openfl::display::_internal::CairoGraphics_obj::strokePattern = null();
HXLINE( 256)			::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 257)			::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(1);
HXLINE( 259)			 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE( 261)			{
HXLINE( 261)				int _g = 0;
HXDLIN( 261)				::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN( 261)				while((_g < _g1->length)){
HXLINE( 261)					 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN( 261)					_g = (_g + 1);
HXLINE( 263)					switch((int)(type->_hx_getIndex())){
            						case (int)0: case (int)1: case (int)2: case (int)3: {
HXLINE( 320)							::openfl::display::_internal::CairoGraphics_obj::endFill();
HXLINE( 322)							bool _hx_tmp;
HXDLIN( 322)							if (::openfl::display::_internal::CairoGraphics_obj::hasFill) {
HXLINE( 322)								_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo->inFill(x,y);
            							}
            							else {
HXLINE( 322)								_hx_tmp = false;
            							}
HXDLIN( 322)							if (_hx_tmp) {
HXLINE( 324)								data->destroy();
HXLINE( 325)								return true;
            							}
HXLINE( 328)							::openfl::display::_internal::CairoGraphics_obj::endStroke();
HXLINE( 330)							bool _hx_tmp1;
HXDLIN( 330)							if (::openfl::display::_internal::CairoGraphics_obj::hasStroke) {
HXLINE( 330)								_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo->inStroke(x,y);
            							}
            							else {
HXLINE( 330)								_hx_tmp1 = false;
            							}
HXDLIN( 330)							if (_hx_tmp1) {
HXLINE( 332)								data->destroy();
HXLINE( 333)								return true;
            							}
HXLINE( 336)							if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn() )) {
HXLINE( 338)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->oPos = (data1->oPos + 2);
HXDLIN( 338)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 338)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->iPos = (data1->iPos + 1);
HXDLIN( 338)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 338)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->oPos = (data1->oPos + 4);
HXDLIN( 338)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 338)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 338)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 338)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 338)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 338)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->fPos = (data1->fPos + 5);
HXDLIN( 338)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 338)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->oPos = (data1->oPos + 2);
HXDLIN( 338)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 338)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->oPos = (data1->oPos + 4);
HXDLIN( 338)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 338)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 338)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 338)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 338)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 338)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->oPos = (data1->oPos + 4);
HXDLIN( 338)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 338)										data2->iPos = (data2->iPos + 1);
HXDLIN( 338)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 338)										data3->fPos = (data3->fPos + 2);
HXDLIN( 338)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 338)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 338)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 338)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 338)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN( 338)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 338)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 339)								::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
HXLINE( 340)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            							}
            							else {
HXLINE( 342)								if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn() )) {
HXLINE( 344)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->oPos = (data1->oPos + 2);
HXDLIN( 344)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 344)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->iPos = (data1->iPos + 1);
HXDLIN( 344)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 344)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->oPos = (data1->oPos + 4);
HXDLIN( 344)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 344)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 344)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 344)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 344)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 344)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->fPos = (data1->fPos + 5);
HXDLIN( 344)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 344)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->oPos = (data1->oPos + 2);
HXDLIN( 344)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 344)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->oPos = (data1->oPos + 4);
HXDLIN( 344)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 344)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 344)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 344)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 344)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 344)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->oPos = (data1->oPos + 4);
HXDLIN( 344)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 344)											data2->iPos = (data2->iPos + 1);
HXDLIN( 344)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 344)											data3->fPos = (data3->fPos + 2);
HXDLIN( 344)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 344)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE( 344)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE( 344)									data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXDLIN( 344)									 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 344)									 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 345)									::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
HXLINE( 347)									::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            								}
            								else {
HXLINE( 350)									if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn() )) {
HXLINE( 352)										switch((int)(data->prev->_hx_getIndex())){
            											case (int)0: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->oPos = (data1->oPos + 2);
HXDLIN( 352)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 352)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)1: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->iPos = (data1->iPos + 1);
HXDLIN( 352)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 352)												data2->fPos = (data2->fPos + 1);
            											}
            											break;
            											case (int)2: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->oPos = (data1->oPos + 4);
HXDLIN( 352)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 352)												data2->iiPos = (data2->iiPos + 2);
HXDLIN( 352)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 352)												data3->ffPos = (data3->ffPos + 1);
HXDLIN( 352)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 352)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)3: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)4: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->fPos = (data1->fPos + 6);
            											}
            											break;
            											case (int)5: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)6: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->fPos = (data1->fPos + 3);
            											}
            											break;
            											case (int)7: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)8: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->oPos = (data1->oPos + 3);
            											}
            											break;
            											case (int)9: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)10: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->fPos = (data1->fPos + 5);
HXDLIN( 352)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 352)												data2->oPos = (data2->oPos + 1);
            											}
            											break;
            											case (int)12: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->oPos = (data1->oPos + 4);
            											}
            											break;
            											case (int)13: {
            											}
            											break;
            											case (int)14: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->oPos = (data1->oPos + 2);
HXDLIN( 352)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 352)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)15: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->oPos = (data1->oPos + 4);
HXDLIN( 352)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 352)												data2->iiPos = (data2->iiPos + 2);
HXDLIN( 352)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 352)												data3->ffPos = (data3->ffPos + 1);
HXDLIN( 352)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 352)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)16: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->oPos = (data1->oPos + 4);
HXDLIN( 352)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 352)												data2->iPos = (data2->iPos + 1);
HXDLIN( 352)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 352)												data3->fPos = (data3->fPos + 2);
HXDLIN( 352)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 352)												data4->bPos = (data4->bPos + 1);
            											}
            											break;
            											case (int)17: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)18: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)19: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)20: {
HXLINE( 352)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 352)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)21: case (int)22: {
            											}
            											break;
            											default:{
            											}
            										}
HXLINE( 352)										data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN( 352)										 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 352)										 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 353)										::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
HXLINE( 354)										::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
            									}
            									else {
HXLINE( 358)										switch((int)(data->prev->_hx_getIndex())){
            											case (int)0: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 2);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 358)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)1: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->iPos = (data1->iPos + 1);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 358)												data2->fPos = (data2->fPos + 1);
            											}
            											break;
            											case (int)2: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 4);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 358)												data2->iiPos = (data2->iiPos + 2);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 358)												data3->ffPos = (data3->ffPos + 1);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 358)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)3: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)4: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->fPos = (data1->fPos + 6);
            											}
            											break;
            											case (int)5: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)6: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->fPos = (data1->fPos + 3);
            											}
            											break;
            											case (int)7: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)8: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 3);
            											}
            											break;
            											case (int)9: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)10: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->fPos = (data1->fPos + 5);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 358)												data2->oPos = (data2->oPos + 1);
            											}
            											break;
            											case (int)12: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 4);
            											}
            											break;
            											case (int)13: {
            											}
            											break;
            											case (int)14: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 2);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 358)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)15: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 4);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 358)												data2->iiPos = (data2->iiPos + 2);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 358)												data3->ffPos = (data3->ffPos + 1);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 358)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)16: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 4);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 358)												data2->iPos = (data2->iPos + 1);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 358)												data3->fPos = (data3->fPos + 2);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 358)												data4->bPos = (data4->bPos + 1);
            											}
            											break;
            											case (int)17: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)18: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)19: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)20: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)21: case (int)22: {
            											}
            											break;
            											default:{
            											}
            										}
HXLINE( 358)										data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN( 358)										 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 358)										 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 359)										::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginFill(c->buffer->i->__get(c->iPos),( (Float)(1) ));
HXLINE( 360)										::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginFill(c->buffer->i->__get(c->iPos),( (Float)(1) ));
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 266)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->oPos = (data1->oPos + 2);
HXDLIN( 266)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 266)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->iPos = (data1->iPos + 1);
HXDLIN( 266)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 266)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->oPos = (data1->oPos + 4);
HXDLIN( 266)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 266)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 266)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 266)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 266)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 266)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->fPos = (data1->fPos + 5);
HXDLIN( 266)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 266)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->oPos = (data1->oPos + 2);
HXDLIN( 266)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 266)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->oPos = (data1->oPos + 4);
HXDLIN( 266)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 266)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 266)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 266)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 266)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 266)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->oPos = (data1->oPos + 4);
HXDLIN( 266)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 266)									data2->iPos = (data2->iPos + 1);
HXDLIN( 266)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 266)									data3->fPos = (data3->fPos + 2);
HXDLIN( 266)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 266)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 266)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 266)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 266)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN( 266)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 266)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 267)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
HXLINE( 268)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
            						}
            						break;
            						case (int)5: {
HXLINE( 271)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->oPos = (data1->oPos + 2);
HXDLIN( 271)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 271)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->iPos = (data1->iPos + 1);
HXDLIN( 271)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 271)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->oPos = (data1->oPos + 4);
HXDLIN( 271)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 271)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 271)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 271)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 271)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 271)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->fPos = (data1->fPos + 5);
HXDLIN( 271)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 271)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->oPos = (data1->oPos + 2);
HXDLIN( 271)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 271)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->oPos = (data1->oPos + 4);
HXDLIN( 271)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 271)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 271)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 271)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 271)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 271)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->oPos = (data1->oPos + 4);
HXDLIN( 271)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 271)									data2->iPos = (data2->iPos + 1);
HXDLIN( 271)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 271)									data3->fPos = (data3->fPos + 2);
HXDLIN( 271)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 271)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 271)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 271)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 271)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN( 271)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 271)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 272)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE( 273)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            						}
            						break;
            						case (int)6: {
HXLINE( 364)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->oPos = (data1->oPos + 2);
HXDLIN( 364)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 364)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->iPos = (data1->iPos + 1);
HXDLIN( 364)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 364)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->oPos = (data1->oPos + 4);
HXDLIN( 364)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 364)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 364)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 364)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 364)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 364)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->fPos = (data1->fPos + 5);
HXDLIN( 364)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 364)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->oPos = (data1->oPos + 2);
HXDLIN( 364)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 364)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->oPos = (data1->oPos + 4);
HXDLIN( 364)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 364)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 364)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 364)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 364)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 364)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->oPos = (data1->oPos + 4);
HXDLIN( 364)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 364)									data2->iPos = (data2->iPos + 1);
HXDLIN( 364)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 364)									data3->fPos = (data3->fPos + 2);
HXDLIN( 364)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 364)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 364)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 364)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN( 364)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 364)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 365)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
HXLINE( 366)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
            						}
            						break;
            						case (int)7: {
HXLINE( 369)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->oPos = (data1->oPos + 2);
HXDLIN( 369)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 369)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->iPos = (data1->iPos + 1);
HXDLIN( 369)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 369)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->oPos = (data1->oPos + 4);
HXDLIN( 369)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 369)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 369)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 369)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 369)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 369)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->fPos = (data1->fPos + 5);
HXDLIN( 369)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 369)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->oPos = (data1->oPos + 2);
HXDLIN( 369)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 369)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->oPos = (data1->oPos + 4);
HXDLIN( 369)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 369)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 369)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 369)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 369)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 369)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->oPos = (data1->oPos + 4);
HXDLIN( 369)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 369)									data2->iPos = (data2->iPos + 1);
HXDLIN( 369)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 369)									data3->fPos = (data3->fPos + 2);
HXDLIN( 369)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 369)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 369)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 369)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 369)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN( 369)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 369)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 370)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE( 371)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            						}
            						break;
            						case (int)9: {
HXLINE( 374)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->oPos = (data1->oPos + 2);
HXDLIN( 374)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 374)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->iPos = (data1->iPos + 1);
HXDLIN( 374)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 374)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->oPos = (data1->oPos + 4);
HXDLIN( 374)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 374)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 374)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 374)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 374)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 374)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->fPos = (data1->fPos + 5);
HXDLIN( 374)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 374)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->oPos = (data1->oPos + 2);
HXDLIN( 374)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 374)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->oPos = (data1->oPos + 4);
HXDLIN( 374)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 374)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 374)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 374)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 374)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 374)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->oPos = (data1->oPos + 4);
HXDLIN( 374)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 374)									data2->iPos = (data2->iPos + 1);
HXDLIN( 374)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 374)									data3->fPos = (data3->fPos + 2);
HXDLIN( 374)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 374)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 374)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 374)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN( 374)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 374)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 375)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE( 376)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            						}
            						break;
            						case (int)10: {
HXLINE( 379)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 2);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 379)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->iPos = (data1->iPos + 1);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 379)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 4);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 379)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 379)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 379)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->fPos = (data1->fPos + 5);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 379)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 2);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 379)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 4);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 379)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 379)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 379)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 4);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 379)									data2->iPos = (data2->iPos + 1);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 379)									data3->fPos = (data3->fPos + 2);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 379)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 379)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN( 379)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 379)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 380)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
HXLINE( 381)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            						}
            						break;
            						case (int)13: {
HXLINE( 299)							{
HXLINE( 299)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->oPos = (data1->oPos + 2);
HXDLIN( 299)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 299)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->iPos = (data1->iPos + 1);
HXDLIN( 299)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 299)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->oPos = (data1->oPos + 4);
HXDLIN( 299)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 299)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 299)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 299)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 299)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 299)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->fPos = (data1->fPos + 5);
HXDLIN( 299)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 299)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->oPos = (data1->oPos + 2);
HXDLIN( 299)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 299)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->oPos = (data1->oPos + 4);
HXDLIN( 299)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 299)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 299)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 299)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 299)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 299)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->oPos = (data1->oPos + 4);
HXDLIN( 299)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 299)										data2->iPos = (data2->iPos + 1);
HXDLIN( 299)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 299)										data3->fPos = (data3->fPos + 2);
HXDLIN( 299)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 299)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 299)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 299)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 299)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn();
HXDLIN( 299)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE( 300)							::openfl::display::_internal::CairoGraphics_obj::endFill();
HXLINE( 302)							bool _hx_tmp;
HXDLIN( 302)							if (::openfl::display::_internal::CairoGraphics_obj::hasFill) {
HXLINE( 302)								_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo->inFill(x,y);
            							}
            							else {
HXLINE( 302)								_hx_tmp = false;
            							}
HXDLIN( 302)							if (_hx_tmp) {
HXLINE( 304)								data->destroy();
HXLINE( 305)								return true;
            							}
HXLINE( 308)							::openfl::display::_internal::CairoGraphics_obj::endStroke();
HXLINE( 310)							bool _hx_tmp1;
HXDLIN( 310)							if (::openfl::display::_internal::CairoGraphics_obj::hasStroke) {
HXLINE( 310)								_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo->inStroke(x,y);
            							}
            							else {
HXLINE( 310)								_hx_tmp1 = false;
            							}
HXDLIN( 310)							if (_hx_tmp1) {
HXLINE( 312)								data->destroy();
HXLINE( 313)								return true;
            							}
HXLINE( 316)							::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
HXLINE( 317)							::openfl::display::_internal::CairoGraphics_obj::bitmapFill = null();
            						}
            						break;
            						case (int)14: {
HXLINE( 295)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->oPos = (data1->oPos + 2);
HXDLIN( 295)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 295)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->iPos = (data1->iPos + 1);
HXDLIN( 295)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 295)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->oPos = (data1->oPos + 4);
HXDLIN( 295)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 295)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 295)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 295)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 295)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 295)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->fPos = (data1->fPos + 5);
HXDLIN( 295)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 295)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->oPos = (data1->oPos + 2);
HXDLIN( 295)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 295)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->oPos = (data1->oPos + 4);
HXDLIN( 295)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 295)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 295)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 295)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 295)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 295)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->oPos = (data1->oPos + 4);
HXDLIN( 295)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 295)									data2->iPos = (data2->iPos + 1);
HXDLIN( 295)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 295)									data3->fPos = (data3->fPos + 2);
HXDLIN( 295)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 295)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 295)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 295)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXDLIN( 295)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 295)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 296)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineBitmapStyle(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            						}
            						break;
            						case (int)15: {
HXLINE( 290)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->oPos = (data1->oPos + 2);
HXDLIN( 290)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 290)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->iPos = (data1->iPos + 1);
HXDLIN( 290)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 290)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->oPos = (data1->oPos + 4);
HXDLIN( 290)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 290)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 290)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 290)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 290)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 290)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->fPos = (data1->fPos + 5);
HXDLIN( 290)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 290)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->oPos = (data1->oPos + 2);
HXDLIN( 290)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 290)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->oPos = (data1->oPos + 4);
HXDLIN( 290)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 290)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 290)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 290)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 290)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 290)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->oPos = (data1->oPos + 4);
HXDLIN( 290)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 290)									data2->iPos = (data2->iPos + 1);
HXDLIN( 290)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 290)									data3->fPos = (data3->fPos + 2);
HXDLIN( 290)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 290)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 290)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 290)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 290)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXDLIN( 290)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 290)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 291)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineGradientStyle(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            						}
            						break;
            						case (int)16: {
HXLINE( 286)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->oPos = (data1->oPos + 2);
HXDLIN( 286)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 286)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->iPos = (data1->iPos + 1);
HXDLIN( 286)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 286)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->oPos = (data1->oPos + 4);
HXDLIN( 286)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 286)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 286)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 286)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 286)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 286)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->fPos = (data1->fPos + 5);
HXDLIN( 286)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 286)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->oPos = (data1->oPos + 2);
HXDLIN( 286)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 286)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->oPos = (data1->oPos + 4);
HXDLIN( 286)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 286)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 286)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 286)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 286)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 286)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->oPos = (data1->oPos + 4);
HXDLIN( 286)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 286)									data2->iPos = (data2->iPos + 1);
HXDLIN( 286)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 286)									data3->fPos = (data3->fPos + 2);
HXDLIN( 286)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 286)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 286)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 286)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 286)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXDLIN( 286)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 286)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 287)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineStyle(c->buffer->o->__get(c->oPos),c->buffer->i->__get(c->iPos),( (Float)(1) ),c->buffer->b->__get(c->bPos),c->buffer->o->__get((c->oPos + 1)),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get((c->fPos + 1)));
            						}
            						break;
            						case (int)17: {
HXLINE( 276)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->oPos = (data1->oPos + 2);
HXDLIN( 276)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 276)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->iPos = (data1->iPos + 1);
HXDLIN( 276)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 276)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->oPos = (data1->oPos + 4);
HXDLIN( 276)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 276)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 276)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 276)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 276)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 276)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->fPos = (data1->fPos + 5);
HXDLIN( 276)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 276)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->oPos = (data1->oPos + 2);
HXDLIN( 276)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 276)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->oPos = (data1->oPos + 4);
HXDLIN( 276)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 276)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 276)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 276)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 276)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 276)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->oPos = (data1->oPos + 4);
HXDLIN( 276)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 276)									data2->iPos = (data2->iPos + 1);
HXDLIN( 276)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 276)									data3->fPos = (data3->fPos + 2);
HXDLIN( 276)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 276)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 276)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 276)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 276)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN( 276)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 276)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 277)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
HXLINE( 278)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            						}
            						break;
            						case (int)18: {
HXLINE( 281)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->oPos = (data1->oPos + 2);
HXDLIN( 281)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 281)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->iPos = (data1->iPos + 1);
HXDLIN( 281)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 281)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->oPos = (data1->oPos + 4);
HXDLIN( 281)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 281)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 281)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 281)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 281)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 281)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->fPos = (data1->fPos + 5);
HXDLIN( 281)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 281)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->oPos = (data1->oPos + 2);
HXDLIN( 281)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 281)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->oPos = (data1->oPos + 4);
HXDLIN( 281)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 281)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 281)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 281)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 281)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 281)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->oPos = (data1->oPos + 4);
HXDLIN( 281)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 281)									data2->iPos = (data2->iPos + 1);
HXDLIN( 281)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 281)									data3->fPos = (data3->fPos + 2);
HXDLIN( 281)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 281)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 281)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 281)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN( 281)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 281)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 282)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
HXLINE( 283)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            						}
            						break;
            						case (int)21: {
HXLINE( 384)							{
HXLINE( 384)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->oPos = (data1->oPos + 2);
HXDLIN( 384)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 384)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->iPos = (data1->iPos + 1);
HXDLIN( 384)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 384)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->oPos = (data1->oPos + 4);
HXDLIN( 384)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 384)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 384)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 384)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 384)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 384)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->fPos = (data1->fPos + 5);
HXDLIN( 384)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 384)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->oPos = (data1->oPos + 2);
HXDLIN( 384)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 384)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->oPos = (data1->oPos + 4);
HXDLIN( 384)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 384)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 384)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 384)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 384)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 384)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->oPos = (data1->oPos + 4);
HXDLIN( 384)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 384)										data2->iPos = (data2->iPos + 1);
HXDLIN( 384)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 384)										data3->fPos = (data3->fPos + 2);
HXDLIN( 384)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 384)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 384)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 384)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn();
HXDLIN( 384)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE( 385)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(1);
            						}
            						break;
            						case (int)22: {
HXLINE( 388)							{
HXLINE( 388)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->oPos = (data1->oPos + 2);
HXDLIN( 388)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 388)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->iPos = (data1->iPos + 1);
HXDLIN( 388)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 388)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->oPos = (data1->oPos + 4);
HXDLIN( 388)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 388)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 388)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 388)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 388)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 388)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->fPos = (data1->fPos + 5);
HXDLIN( 388)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 388)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->oPos = (data1->oPos + 2);
HXDLIN( 388)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 388)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->oPos = (data1->oPos + 4);
HXDLIN( 388)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 388)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 388)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 388)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 388)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 388)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->oPos = (data1->oPos + 4);
HXDLIN( 388)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 388)										data2->iPos = (data2->iPos + 1);
HXDLIN( 388)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 388)										data3->fPos = (data3->fPos + 2);
HXDLIN( 388)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 388)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 388)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 388)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 388)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn();
HXDLIN( 388)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE( 389)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(0);
            						}
            						break;
            						default:{
HXLINE( 392)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->oPos = (data1->oPos + 2);
HXDLIN( 392)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 392)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->iPos = (data1->iPos + 1);
HXDLIN( 392)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 392)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->oPos = (data1->oPos + 4);
HXDLIN( 392)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 392)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 392)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 392)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 392)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 392)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->fPos = (data1->fPos + 5);
HXDLIN( 392)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 392)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->oPos = (data1->oPos + 2);
HXDLIN( 392)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 392)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->oPos = (data1->oPos + 4);
HXDLIN( 392)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 392)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 392)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 392)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 392)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 392)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->oPos = (data1->oPos + 4);
HXDLIN( 392)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 392)									data2->iPos = (data2->iPos + 1);
HXDLIN( 392)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 392)									data3->fPos = (data3->fPos + 2);
HXDLIN( 392)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 392)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 392)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 392)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 392)							data->prev = type;
            						}
            					}
            				}
            			}
HXLINE( 396)			bool hitTest = false;
HXLINE( 398)			if ((::openfl::display::_internal::CairoGraphics_obj::fillCommands->get_length() > 0)) {
HXLINE( 400)				::openfl::display::_internal::CairoGraphics_obj::endFill();
            			}
HXLINE( 403)			bool _hx_tmp;
HXDLIN( 403)			if (::openfl::display::_internal::CairoGraphics_obj::hasFill) {
HXLINE( 403)				_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo->inFill(x,y);
            			}
            			else {
HXLINE( 403)				_hx_tmp = false;
            			}
HXDLIN( 403)			if (_hx_tmp) {
HXLINE( 405)				hitTest = true;
            			}
HXLINE( 408)			if ((::openfl::display::_internal::CairoGraphics_obj::strokeCommands->get_length() > 0)) {
HXLINE( 410)				::openfl::display::_internal::CairoGraphics_obj::endStroke();
            			}
HXLINE( 413)			bool _hx_tmp1;
HXDLIN( 413)			if (::openfl::display::_internal::CairoGraphics_obj::hasStroke) {
HXLINE( 413)				_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo->inStroke(x,y);
            			}
            			else {
HXLINE( 413)				_hx_tmp1 = false;
            			}
HXDLIN( 413)			if (_hx_tmp1) {
HXLINE( 415)				hitTest = true;
            			}
HXLINE( 418)			data->destroy();
HXLINE( 420)			return hitTest;
            		}
HXLINE( 226)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoGraphics_obj,hitTest,return )

bool CairoGraphics_obj::isCCW(Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_430_isCCW)
HXDLIN( 430)		return ((((x2 - x1) * (y3 - y1)) - ((y2 - y1) * (x3 - x1))) < 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,isCCW,return )

 ::Dynamic CairoGraphics_obj::normalizeUVT( ::openfl::_Vector::FloatVector uvt,::hx::Null< bool >  __o_skipT){
            		bool skipT = __o_skipT.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_434_normalizeUVT)
HXLINE( 435)		Float max = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 436)		Float tmp = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 437)		int len = uvt->get_length();
HXLINE( 439)		{
HXLINE( 439)			int _g = 1;
HXDLIN( 439)			int _g1 = (len + 1);
HXDLIN( 439)			while((_g < _g1)){
HXLINE( 439)				_g = (_g + 1);
HXDLIN( 439)				int t = (_g - 1);
HXLINE( 441)				bool _hx_tmp;
HXDLIN( 441)				if (skipT) {
HXLINE( 441)					_hx_tmp = (::hx::Mod(t,3) == 0);
            				}
            				else {
HXLINE( 441)					_hx_tmp = false;
            				}
HXDLIN( 441)				if (_hx_tmp) {
HXLINE( 443)					continue;
            				}
HXLINE( 446)				tmp = uvt->get((t - 1));
HXLINE( 448)				if ((max < tmp)) {
HXLINE( 450)					max = tmp;
            				}
            			}
            		}
HXLINE( 454)		if (!(skipT)) {
HXLINE( 456)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("max",a4,0a,53,00),max)
            				->setFixed(1,HX_("uvt",f3,2e,59,00),uvt));
            		}
HXLINE( 459)		int length = null();
HXDLIN( 459)		bool fixed = null();
HXDLIN( 459)		::Array< Float > array = null();
HXDLIN( 459)		 ::openfl::_Vector::FloatVector result =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 461)		{
HXLINE( 461)			int _g2 = 1;
HXDLIN( 461)			int _g3 = (len + 1);
HXDLIN( 461)			while((_g2 < _g3)){
HXLINE( 461)				_g2 = (_g2 + 1);
HXDLIN( 461)				int t = (_g2 - 1);
HXLINE( 463)				bool _hx_tmp;
HXDLIN( 463)				if (skipT) {
HXLINE( 463)					_hx_tmp = (::hx::Mod(t,3) == 0);
            				}
            				else {
HXLINE( 463)					_hx_tmp = false;
            				}
HXDLIN( 463)				if (_hx_tmp) {
HXLINE( 465)					continue;
            				}
HXLINE( 468)				result->push(uvt->get((t - 1)));
            			}
            		}
HXLINE( 471)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("max",a4,0a,53,00),max)
            			->setFixed(1,HX_("uvt",f3,2e,59,00),result));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,normalizeUVT,return )

void CairoGraphics_obj::playCommands( ::openfl::display::_internal::DrawCommandBuffer commands,::hx::Null< bool >  __o_stroke){
            		bool stroke = __o_stroke.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_475_playCommands)
HXLINE( 476)		if ((commands->get_length() == 0)) {
HXLINE( 476)			return;
            		}
HXLINE( 478)		::openfl::display::_internal::CairoGraphics_obj::bounds = ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds;
HXLINE( 480)		Float offsetX = ::openfl::display::_internal::CairoGraphics_obj::bounds->x;
HXLINE( 481)		Float offsetY = ::openfl::display::_internal::CairoGraphics_obj::bounds->y;
HXLINE( 483)		Float positionX = ((Float)0.0);
HXLINE( 484)		Float positionY = ((Float)0.0);
HXLINE( 486)		bool closeGap = false;
HXLINE( 487)		Float startX = ((Float)0.0);
HXLINE( 488)		Float startY = ((Float)0.0);
HXLINE( 489)		bool setStart = false;
HXLINE( 491)		::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(1);
HXLINE( 492)		::openfl::display::_internal::CairoGraphics_obj::cairo->set_antialias(3);
HXLINE( 494)		bool hasPath = false;
HXLINE( 496)		 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,commands);
HXLINE( 498)		Float x;
HXDLIN( 498)		Float y;
HXDLIN( 498)		Float width;
HXDLIN( 498)		Float height;
HXDLIN( 498)		Float kappa = ((Float).5522848);
HXDLIN( 498)		Float ox;
HXDLIN( 498)		Float oy;
HXDLIN( 498)		Float xe;
HXDLIN( 498)		Float ye;
HXDLIN( 498)		Float xm;
HXDLIN( 498)		Float ym;
HXDLIN( 498)		Float r;
HXDLIN( 498)		Float g;
HXDLIN( 498)		Float b;
HXLINE( 513)		{
HXLINE( 513)			int _g = 0;
HXDLIN( 513)			::Array< ::Dynamic> _g1 = commands->types;
HXDLIN( 513)			while((_g < _g1->length)){
HXLINE( 513)				 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN( 513)				_g = (_g + 1);
HXLINE( 515)				switch((int)(type->_hx_getIndex())){
            					case (int)0: {
HXLINE( 693)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->oPos = (data1->oPos + 2);
HXDLIN( 693)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 693)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->iPos = (data1->iPos + 1);
HXDLIN( 693)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 693)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->oPos = (data1->oPos + 4);
HXDLIN( 693)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 693)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 693)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 693)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 693)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 693)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->fPos = (data1->fPos + 5);
HXDLIN( 693)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 693)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->oPos = (data1->oPos + 2);
HXDLIN( 693)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 693)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->oPos = (data1->oPos + 4);
HXDLIN( 693)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 693)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 693)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 693)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 693)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 693)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->oPos = (data1->oPos + 4);
HXDLIN( 693)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 693)								data2->iPos = (data2->iPos + 1);
HXDLIN( 693)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 693)								data3->fPos = (data3->fPos + 2);
HXDLIN( 693)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 693)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 693)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 693)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 693)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN( 693)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 693)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 694)						::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::openfl::display::_internal::CairoGraphics_obj::createImagePattern(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
HXLINE( 696)						::openfl::display::_internal::CairoGraphics_obj::bitmapFill = ( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) );
HXLINE( 697)						::openfl::display::_internal::CairoGraphics_obj::bitmapRepeat = c->buffer->b->__get(c->bPos);
HXLINE( 699)						::openfl::display::_internal::CairoGraphics_obj::hasFill = true;
            					}
            					break;
            					case (int)1: {
HXLINE( 702)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->oPos = (data1->oPos + 2);
HXDLIN( 702)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 702)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->iPos = (data1->iPos + 1);
HXDLIN( 702)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 702)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->oPos = (data1->oPos + 4);
HXDLIN( 702)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 702)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 702)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 702)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 702)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 702)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->fPos = (data1->fPos + 5);
HXDLIN( 702)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 702)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->oPos = (data1->oPos + 2);
HXDLIN( 702)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 702)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->oPos = (data1->oPos + 4);
HXDLIN( 702)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 702)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 702)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 702)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 702)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 702)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->oPos = (data1->oPos + 4);
HXDLIN( 702)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 702)								data2->iPos = (data2->iPos + 1);
HXDLIN( 702)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 702)								data3->fPos = (data3->fPos + 2);
HXDLIN( 702)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 702)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 702)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 702)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 702)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN( 702)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 702)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 703)						if ((c->buffer->f->__get(c->fPos) < ((Float)0.005))) {
HXLINE( 705)							::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
            						}
            						else {
HXLINE( 709)							if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::fillPattern )) {
HXLINE( 711)								::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix = null();
            							}
HXLINE( 714)							::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA((( (Float)(::hx::UShr((c->buffer->i->__get(c->iPos) & 16711680),16)) ) / ( (Float)(255) )),(( (Float)(::hx::UShr((c->buffer->i->__get(c->iPos) & 65280),8)) ) / ( (Float)(255) )),(( (Float)((c->buffer->i->__get(c->iPos) & 255)) ) / ( (Float)(255) )),c->buffer->f->__get(c->fPos));
HXLINE( 716)							::openfl::display::_internal::CairoGraphics_obj::hasFill = true;
            						}
HXLINE( 719)						::openfl::display::_internal::CairoGraphics_obj::bitmapFill = null();
            					}
            					break;
            					case (int)2: {
HXLINE( 722)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->oPos = (data1->oPos + 2);
HXDLIN( 722)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 722)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->iPos = (data1->iPos + 1);
HXDLIN( 722)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 722)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->oPos = (data1->oPos + 4);
HXDLIN( 722)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 722)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 722)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 722)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 722)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 722)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->fPos = (data1->fPos + 5);
HXDLIN( 722)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 722)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->oPos = (data1->oPos + 2);
HXDLIN( 722)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 722)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->oPos = (data1->oPos + 4);
HXDLIN( 722)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 722)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 722)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 722)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 722)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 722)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->oPos = (data1->oPos + 4);
HXDLIN( 722)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 722)								data2->iPos = (data2->iPos + 1);
HXDLIN( 722)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 722)								data3->fPos = (data3->fPos + 2);
HXDLIN( 722)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 722)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 722)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 722)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 722)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXDLIN( 722)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 722)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 723)						if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::fillPattern )) {
HXLINE( 725)							::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix = null();
            						}
HXLINE( 728)						::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::openfl::display::_internal::CairoGraphics_obj::createGradientPattern(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
HXLINE( 731)						::openfl::display::_internal::CairoGraphics_obj::hasFill = true;
HXLINE( 732)						::openfl::display::_internal::CairoGraphics_obj::bitmapFill = null();
            					}
            					break;
            					case (int)3: {
HXLINE( 735)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->oPos = (data1->oPos + 2);
HXDLIN( 735)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 735)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->iPos = (data1->iPos + 1);
HXDLIN( 735)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 735)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->oPos = (data1->oPos + 4);
HXDLIN( 735)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 735)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 735)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 735)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 735)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 735)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->fPos = (data1->fPos + 5);
HXDLIN( 735)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 735)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->oPos = (data1->oPos + 2);
HXDLIN( 735)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 735)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->oPos = (data1->oPos + 4);
HXDLIN( 735)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 735)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 735)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 735)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 735)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 735)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->oPos = (data1->oPos + 4);
HXDLIN( 735)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 735)								data2->iPos = (data2->iPos + 1);
HXDLIN( 735)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 735)								data3->fPos = (data3->fPos + 2);
HXDLIN( 735)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 735)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 735)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 735)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 735)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN( 735)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 735)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 736)						 ::openfl::display::_internal::ShaderBuffer shaderBuffer = ( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) );
HXLINE( 738)						if ((shaderBuffer->inputCount > 0)) {
HXLINE( 740)							::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::openfl::display::_internal::CairoGraphics_obj::createImagePattern(shaderBuffer->inputs->__get(0).StaticCast<  ::openfl::display::BitmapData >(),null(),::hx::IsNotEq( shaderBuffer->inputWrap->__get(0),0 ),::hx::IsNotEq( shaderBuffer->inputFilter->__get(0),5 ));
HXLINE( 743)							::openfl::display::_internal::CairoGraphics_obj::bitmapFill = shaderBuffer->inputs->__get(0).StaticCast<  ::openfl::display::BitmapData >();
HXLINE( 744)							::openfl::display::_internal::CairoGraphics_obj::bitmapRepeat = false;
HXLINE( 746)							::openfl::display::_internal::CairoGraphics_obj::hasFill = true;
            						}
            					}
            					break;
            					case (int)4: {
HXLINE( 518)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->oPos = (data1->oPos + 2);
HXDLIN( 518)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 518)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->iPos = (data1->iPos + 1);
HXDLIN( 518)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 518)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->oPos = (data1->oPos + 4);
HXDLIN( 518)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 518)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 518)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 518)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 518)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 518)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->fPos = (data1->fPos + 5);
HXDLIN( 518)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 518)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->oPos = (data1->oPos + 2);
HXDLIN( 518)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 518)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->oPos = (data1->oPos + 4);
HXDLIN( 518)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 518)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 518)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 518)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 518)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 518)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->oPos = (data1->oPos + 4);
HXDLIN( 518)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 518)								data2->iPos = (data2->iPos + 1);
HXDLIN( 518)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 518)								data3->fPos = (data3->fPos + 2);
HXDLIN( 518)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 518)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 518)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 518)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 518)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN( 518)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 518)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 519)						hasPath = true;
HXLINE( 520)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),(c->buffer->f->__get((c->fPos + 2)) - offsetX),(c->buffer->f->__get((c->fPos + 3)) - offsetY),(c->buffer->f->__get((c->fPos + 4)) - offsetX),(c->buffer->f->__get((c->fPos + 5)) - offsetY));
            					}
            					break;
            					case (int)5: {
HXLINE( 530)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->oPos = (data1->oPos + 2);
HXDLIN( 530)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 530)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->iPos = (data1->iPos + 1);
HXDLIN( 530)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 530)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->oPos = (data1->oPos + 4);
HXDLIN( 530)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 530)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 530)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 530)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 530)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 530)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->fPos = (data1->fPos + 5);
HXDLIN( 530)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 530)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->oPos = (data1->oPos + 2);
HXDLIN( 530)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 530)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->oPos = (data1->oPos + 4);
HXDLIN( 530)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 530)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 530)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 530)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 530)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 530)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->oPos = (data1->oPos + 4);
HXDLIN( 530)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 530)								data2->iPos = (data2->iPos + 1);
HXDLIN( 530)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 530)								data3->fPos = (data3->fPos + 2);
HXDLIN( 530)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 530)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 530)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 530)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 530)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN( 530)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 530)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 531)						hasPath = true;
HXLINE( 532)						::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),(c->buffer->f->__get((c->fPos + 2)) - offsetX),(c->buffer->f->__get((c->fPos + 3)) - offsetY));
            					}
            					break;
            					case (int)6: {
HXLINE( 535)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->oPos = (data1->oPos + 2);
HXDLIN( 535)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 535)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->iPos = (data1->iPos + 1);
HXDLIN( 535)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 535)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->oPos = (data1->oPos + 4);
HXDLIN( 535)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 535)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 535)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 535)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 535)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 535)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->fPos = (data1->fPos + 5);
HXDLIN( 535)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 535)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->oPos = (data1->oPos + 2);
HXDLIN( 535)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 535)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->oPos = (data1->oPos + 4);
HXDLIN( 535)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 535)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 535)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 535)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 535)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 535)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->oPos = (data1->oPos + 4);
HXDLIN( 535)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 535)								data2->iPos = (data2->iPos + 1);
HXDLIN( 535)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 535)								data3->fPos = (data3->fPos + 2);
HXDLIN( 535)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 535)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 535)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 535)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 535)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN( 535)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 535)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 536)						hasPath = true;
HXLINE( 537)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(((c->buffer->f->__get(c->fPos) - offsetX) + c->buffer->f->__get((c->fPos + 2))),(c->buffer->f->__get((c->fPos + 1)) - offsetY));
HXLINE( 538)						::openfl::display::_internal::CairoGraphics_obj::cairo->arc((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),c->buffer->f->__get((c->fPos + 2)),( (Float)(0) ),(::Math_obj::PI * ( (Float)(2) )));
            					}
            					break;
            					case (int)7: {
HXLINE( 546)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->oPos = (data1->oPos + 2);
HXDLIN( 546)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 546)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->iPos = (data1->iPos + 1);
HXDLIN( 546)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 546)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->oPos = (data1->oPos + 4);
HXDLIN( 546)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 546)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 546)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 546)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 546)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 546)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->fPos = (data1->fPos + 5);
HXDLIN( 546)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 546)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->oPos = (data1->oPos + 2);
HXDLIN( 546)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 546)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->oPos = (data1->oPos + 4);
HXDLIN( 546)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 546)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 546)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 546)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 546)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 546)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->oPos = (data1->oPos + 4);
HXDLIN( 546)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 546)								data2->iPos = (data2->iPos + 1);
HXDLIN( 546)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 546)								data3->fPos = (data3->fPos + 2);
HXDLIN( 546)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 546)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 546)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 546)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN( 546)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 546)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 547)						hasPath = true;
HXLINE( 549)						x = c->buffer->f->__get(c->fPos);
HXLINE( 550)						y = c->buffer->f->__get((c->fPos + 1));
HXLINE( 551)						width = c->buffer->f->__get((c->fPos + 2));
HXLINE( 552)						height = c->buffer->f->__get((c->fPos + 3));
HXLINE( 554)						x = (x - offsetX);
HXLINE( 555)						y = (y - offsetY);
HXLINE( 557)						ox = ((width / ( (Float)(2) )) * kappa);
HXLINE( 558)						oy = ((height / ( (Float)(2) )) * kappa);
HXLINE( 559)						xe = (x + width);
HXLINE( 560)						ye = (y + height);
HXLINE( 561)						xm = (x + (width / ( (Float)(2) )));
HXLINE( 562)						ym = (y + (height / ( (Float)(2) )));
HXLINE( 564)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(x,ym);
HXLINE( 565)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(x,(ym - oy),(xm - ox),y,xm,y);
HXLINE( 566)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((xm + ox),y,xe,(ym - oy),xe,ym);
HXLINE( 567)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(xe,(ym + oy),(xm + ox),ye,xm,ye);
HXLINE( 568)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((xm - ox),ye,x,(ym + oy),x,ym);
            					}
            					break;
            					case (int)8: {
HXLINE( 750)						int cacheExtend = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::get_extend(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE( 751)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(::openfl::display::_internal::CairoGraphics_obj::fillPattern,0);
HXLINE( 753)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->oPos = (data1->oPos + 2);
HXDLIN( 753)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 753)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->iPos = (data1->iPos + 1);
HXDLIN( 753)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 753)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->oPos = (data1->oPos + 4);
HXDLIN( 753)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 753)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 753)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 753)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 753)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 753)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->fPos = (data1->fPos + 5);
HXDLIN( 753)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 753)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->oPos = (data1->oPos + 2);
HXDLIN( 753)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 753)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->oPos = (data1->oPos + 4);
HXDLIN( 753)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 753)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 753)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 753)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 753)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 753)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->oPos = (data1->oPos + 4);
HXDLIN( 753)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 753)								data2->iPos = (data2->iPos + 1);
HXDLIN( 753)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 753)								data3->fPos = (data3->fPos + 2);
HXDLIN( 753)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 753)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 753)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 753)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 753)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN( 753)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 753)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 754)						 ::openfl::_Vector::FloatVector rects = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 755)						 ::openfl::_Vector::IntVector indices = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 756)						 ::openfl::_Vector::FloatVector transforms = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 758)						bool hasIndices = ::hx::IsNotNull( indices );
HXLINE( 759)						bool transformABCD = false;
HXDLIN( 759)						bool transformXY = false;
HXLINE( 761)						int length;
HXDLIN( 761)						if (hasIndices) {
HXLINE( 761)							length = indices->get_length();
            						}
            						else {
HXLINE( 761)							length = ::Math_obj::floor((( (Float)(rects->get_length()) ) / ( (Float)(4) )));
            						}
HXLINE( 762)						if ((length == 0)) {
HXLINE( 762)							return;
            						}
HXLINE( 764)						if (::hx::IsNotNull( transforms )) {
HXLINE( 766)							if ((transforms->get_length() >= (length * 6))) {
HXLINE( 768)								transformABCD = true;
HXLINE( 769)								transformXY = true;
            							}
            							else {
HXLINE( 771)								if ((transforms->get_length() >= (length * 4))) {
HXLINE( 773)									transformABCD = true;
            								}
            								else {
HXLINE( 775)									if ((transforms->get_length() >= (length * 2))) {
HXLINE( 777)										transformXY = true;
            									}
            								}
            							}
            						}
HXLINE( 781)						 ::openfl::geom::Rectangle tileRect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 782)						 ::openfl::geom::Matrix tileTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 784)						 ::openfl::geom::Rectangle sourceRect;
HXDLIN( 784)						if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::bitmapFill )) {
HXLINE( 784)							sourceRect = ::openfl::display::_internal::CairoGraphics_obj::bitmapFill->rect;
            						}
            						else {
HXLINE( 784)							sourceRect = null();
            						}
HXLINE( 785)						::openfl::display::_internal::CairoGraphics_obj::tempMatrix3->identity();
HXLINE( 787)						 ::openfl::geom::Matrix transform = ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform;
HXLINE( 789)						Float alpha = ::openfl::display::_internal::CairoGraphics_obj::worldAlpha;
HXLINE( 791)						int ri;
HXDLIN( 791)						int ti;
HXLINE( 793)						{
HXLINE( 793)							int _g = 0;
HXDLIN( 793)							int _g1 = length;
HXDLIN( 793)							while((_g < _g1)){
HXLINE( 793)								_g = (_g + 1);
HXDLIN( 793)								int i = (_g - 1);
HXLINE( 795)								if (hasIndices) {
HXLINE( 795)									ri = (indices->get(i) * 4);
            								}
            								else {
HXLINE( 795)									ri = (i * 4);
            								}
HXLINE( 796)								if ((ri < 0)) {
HXLINE( 796)									continue;
            								}
HXLINE( 797)								Float _hx_tmp = rects->get(ri);
HXDLIN( 797)								Float _hx_tmp1 = rects->get((ri + 1));
HXDLIN( 797)								Float _hx_tmp2 = rects->get((ri + 2));
HXDLIN( 797)								tileRect->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,rects->get((ri + 3)));
HXLINE( 799)								bool _hx_tmp3;
HXDLIN( 799)								if (!((tileRect->width <= 0))) {
HXLINE( 799)									_hx_tmp3 = (tileRect->height <= 0);
            								}
            								else {
HXLINE( 799)									_hx_tmp3 = true;
            								}
HXDLIN( 799)								if (_hx_tmp3) {
HXLINE( 801)									continue;
            								}
HXLINE( 804)								bool _hx_tmp4;
HXDLIN( 804)								if (transformABCD) {
HXLINE( 804)									_hx_tmp4 = transformXY;
            								}
            								else {
HXLINE( 804)									_hx_tmp4 = false;
            								}
HXDLIN( 804)								if (_hx_tmp4) {
HXLINE( 806)									ti = (i * 6);
HXLINE( 807)									Float _hx_tmp = transforms->get(ti);
HXDLIN( 807)									Float _hx_tmp1 = transforms->get((ti + 1));
HXDLIN( 807)									Float _hx_tmp2 = transforms->get((ti + 2));
HXDLIN( 807)									Float _hx_tmp3 = transforms->get((ti + 3));
HXDLIN( 807)									Float _hx_tmp4 = transforms->get((ti + 4));
HXDLIN( 807)									tileTransform->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,transforms->get((ti + 5)));
            								}
            								else {
HXLINE( 810)									if (transformABCD) {
HXLINE( 812)										ti = (i * 4);
HXLINE( 813)										Float _hx_tmp = transforms->get(ti);
HXDLIN( 813)										Float _hx_tmp1 = transforms->get((ti + 1));
HXDLIN( 813)										Float _hx_tmp2 = transforms->get((ti + 2));
HXDLIN( 813)										tileTransform->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,transforms->get((ti + 3)),tileRect->x,tileRect->y);
            									}
            									else {
HXLINE( 815)										if (transformXY) {
HXLINE( 817)											ti = (i * 2);
HXLINE( 818)											tileTransform->tx = transforms->get(ti);
HXLINE( 819)											tileTransform->ty = transforms->get((ti + 1));
            										}
            										else {
HXLINE( 823)											tileTransform->tx = tileRect->x;
HXLINE( 824)											tileTransform->ty = tileRect->y;
            										}
            									}
            								}
HXLINE( 827)								 ::openfl::geom::Matrix tileTransform1 = tileTransform;
HXDLIN( 827)								tileTransform1->tx = (tileTransform1->tx + (positionX - offsetX));
HXLINE( 828)								 ::openfl::geom::Matrix tileTransform2 = tileTransform;
HXDLIN( 828)								tileTransform2->ty = (tileTransform2->ty + (positionY - offsetY));
HXLINE( 829)								tileTransform->concat(transform);
HXLINE( 838)								 ::lime::graphics::cairo::Cairo _hx_tmp5 = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN( 838)								_hx_tmp5->set_matrix(tileTransform->_hx___toMatrix3());
HXLINE( 840)								::openfl::display::_internal::CairoGraphics_obj::tempMatrix3->tx = tileRect->x;
HXLINE( 841)								::openfl::display::_internal::CairoGraphics_obj::tempMatrix3->ty = tileRect->y;
HXLINE( 842)								::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(::openfl::display::_internal::CairoGraphics_obj::fillPattern,::openfl::display::_internal::CairoGraphics_obj::tempMatrix3);
HXLINE( 843)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE( 845)								if (::hx::IsInstanceNotEq( tileRect,sourceRect )) {
HXLINE( 847)									::openfl::display::_internal::CairoGraphics_obj::cairo->save();
HXLINE( 849)									::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 850)									::openfl::display::_internal::CairoGraphics_obj::cairo->rectangle(( (Float)(0) ),( (Float)(0) ),tileRect->width,tileRect->height);
HXLINE( 851)									::openfl::display::_internal::CairoGraphics_obj::cairo->clip();
            								}
HXLINE( 854)								if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE( 856)									if ((alpha == 1)) {
HXLINE( 858)										::openfl::display::_internal::CairoGraphics_obj::cairo->paint();
            									}
            									else {
HXLINE( 862)										::openfl::display::_internal::CairoGraphics_obj::cairo->paintWithAlpha(alpha);
            									}
            								}
HXLINE( 866)								if (::hx::IsInstanceNotEq( tileRect,sourceRect )) {
HXLINE( 868)									::openfl::display::_internal::CairoGraphics_obj::cairo->restore();
            								}
            							}
            						}
HXLINE( 872)						::openfl::geom::Rectangle_obj::_hx___pool->release(tileRect);
HXLINE( 873)						::openfl::geom::Matrix_obj::_hx___pool->release(tileTransform);
HXLINE( 875)						 ::lime::graphics::cairo::Cairo _hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN( 875)						_hx_tmp->set_matrix(::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform->_hx___toMatrix3());
HXLINE( 876)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(::openfl::display::_internal::CairoGraphics_obj::fillPattern,cacheExtend);
            					}
            					break;
            					case (int)9: {
HXLINE( 541)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->oPos = (data1->oPos + 2);
HXDLIN( 541)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 541)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->iPos = (data1->iPos + 1);
HXDLIN( 541)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 541)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->oPos = (data1->oPos + 4);
HXDLIN( 541)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 541)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 541)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 541)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 541)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 541)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->fPos = (data1->fPos + 5);
HXDLIN( 541)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 541)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->oPos = (data1->oPos + 2);
HXDLIN( 541)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 541)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->oPos = (data1->oPos + 4);
HXDLIN( 541)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 541)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 541)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 541)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 541)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 541)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->oPos = (data1->oPos + 4);
HXDLIN( 541)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 541)								data2->iPos = (data2->iPos + 1);
HXDLIN( 541)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 541)								data3->fPos = (data3->fPos + 2);
HXDLIN( 541)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 541)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 541)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 541)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 541)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN( 541)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 541)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 542)						hasPath = true;
HXLINE( 543)						::openfl::display::_internal::CairoGraphics_obj::cairo->rectangle((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)10: {
HXLINE( 571)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->oPos = (data1->oPos + 2);
HXDLIN( 571)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 571)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->iPos = (data1->iPos + 1);
HXDLIN( 571)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 571)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->oPos = (data1->oPos + 4);
HXDLIN( 571)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 571)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 571)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 571)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 571)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 571)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->fPos = (data1->fPos + 5);
HXDLIN( 571)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 571)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->oPos = (data1->oPos + 2);
HXDLIN( 571)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 571)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->oPos = (data1->oPos + 4);
HXDLIN( 571)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 571)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 571)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 571)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 571)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 571)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->oPos = (data1->oPos + 4);
HXDLIN( 571)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 571)								data2->iPos = (data2->iPos + 1);
HXDLIN( 571)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 571)								data3->fPos = (data3->fPos + 2);
HXDLIN( 571)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 571)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 571)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 571)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 571)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN( 571)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 571)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 572)						hasPath = true;
HXLINE( 573)						::openfl::display::_internal::CairoGraphics_obj::drawRoundRect((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            					}
            					break;
            					case (int)12: {
HXLINE( 879)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->oPos = (data1->oPos + 2);
HXDLIN( 879)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 879)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->iPos = (data1->iPos + 1);
HXDLIN( 879)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 879)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->oPos = (data1->oPos + 4);
HXDLIN( 879)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 879)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 879)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 879)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 879)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 879)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->fPos = (data1->fPos + 5);
HXDLIN( 879)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 879)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->oPos = (data1->oPos + 2);
HXDLIN( 879)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 879)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->oPos = (data1->oPos + 4);
HXDLIN( 879)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 879)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 879)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 879)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 879)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 879)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->oPos = (data1->oPos + 4);
HXDLIN( 879)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 879)								data2->iPos = (data2->iPos + 1);
HXDLIN( 879)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 879)								data3->fPos = (data3->fPos + 2);
HXDLIN( 879)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 879)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 879)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 879)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN( 879)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 879)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 880)						 ::openfl::_Vector::FloatVector v = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 881)						 ::openfl::_Vector::IntVector ind = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 882)						 ::openfl::_Vector::FloatVector uvt = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 883)						bool colorFill = ::hx::IsNull( ::openfl::display::_internal::CairoGraphics_obj::bitmapFill );
HXLINE( 885)						bool _hx_tmp;
HXDLIN( 885)						if (colorFill) {
HXLINE( 885)							_hx_tmp = ::hx::IsNotNull( uvt );
            						}
            						else {
HXLINE( 885)							_hx_tmp = false;
            						}
HXDLIN( 885)						if (_hx_tmp) {
HXLINE( 887)							goto _hx_goto_14;
            						}
HXLINE( 890)						int width = 0;
HXLINE( 891)						int height = 0;
HXLINE( 892)						 ::lime::math::Matrix3 currentMatrix = ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform->_hx___toMatrix3();
HXLINE( 894)						if (!(colorFill)) {
HXLINE( 898)							if (::hx::IsNull( uvt )) {
HXLINE( 900)								int length = null();
HXDLIN( 900)								bool fixed = null();
HXDLIN( 900)								::Array< Float > array = null();
HXDLIN( 900)								uvt =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 902)								{
HXLINE( 902)									int _g = 0;
HXDLIN( 902)									int _g1 = ::Std_obj::_hx_int((( (Float)(v->get_length()) ) / ( (Float)(2) )));
HXDLIN( 902)									while((_g < _g1)){
HXLINE( 902)										_g = (_g + 1);
HXDLIN( 902)										int i = (_g - 1);
HXLINE( 904)										{
HXLINE( 904)											Float value = v->get((i * 2));
HXDLIN( 904)											uvt->push((value - (offsetX / ( (Float)(::openfl::display::_internal::CairoGraphics_obj::bitmapFill->width) ))));
            										}
HXLINE( 905)										{
HXLINE( 905)											Float value1 = v->get(((i * 2) + 1));
HXDLIN( 905)											uvt->push((value1 - (offsetY / ( (Float)(::openfl::display::_internal::CairoGraphics_obj::bitmapFill->height) ))));
            										}
            									}
            								}
            							}
HXLINE( 909)							int skipT = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) )->get_length();
HXDLIN( 909)							bool skipT1 = (skipT != v->get_length());
HXLINE( 910)							 ::Dynamic normalizedUVT = ::openfl::display::_internal::CairoGraphics_obj::normalizeUVT(uvt,skipT1);
HXLINE( 911)							Float maxUVT = ( (Float)(normalizedUVT->__Field(HX_("max",a4,0a,53,00),::hx::paccDynamic)) );
HXLINE( 912)							uvt = ( ( ::openfl::_Vector::FloatVector)(normalizedUVT->__Field(HX_("uvt",f3,2e,59,00),::hx::paccDynamic)) );
HXLINE( 914)							if ((maxUVT > 1)) {
HXLINE( 916)								width = ::Std_obj::_hx_int(::openfl::display::_internal::CairoGraphics_obj::bounds->width);
HXLINE( 917)								height = ::Std_obj::_hx_int(::openfl::display::_internal::CairoGraphics_obj::bounds->height);
            							}
            							else {
HXLINE( 921)								width = ::openfl::display::_internal::CairoGraphics_obj::bitmapFill->width;
HXLINE( 922)								height = ::openfl::display::_internal::CairoGraphics_obj::bitmapFill->height;
            							}
            						}
HXLINE( 926)						int i = 0;
HXLINE( 927)						int l = ind->get_length();
HXLINE( 929)						int a_;
HXDLIN( 929)						int b_;
HXDLIN( 929)						int c_;
HXLINE( 930)						int iax;
HXDLIN( 930)						int iay;
HXDLIN( 930)						int ibx;
HXDLIN( 930)						int iby;
HXDLIN( 930)						int icx;
HXDLIN( 930)						int icy;
HXLINE( 931)						Float x1;
HXDLIN( 931)						Float y1;
HXDLIN( 931)						Float x2;
HXDLIN( 931)						Float y2;
HXDLIN( 931)						Float x3;
HXDLIN( 931)						Float y3;
HXLINE( 932)						Float uvx1;
HXDLIN( 932)						Float uvy1;
HXDLIN( 932)						Float uvx2;
HXDLIN( 932)						Float uvy2;
HXDLIN( 932)						Float uvx3;
HXDLIN( 932)						Float uvy3;
HXLINE( 933)						Float denom;
HXLINE( 934)						Float t1;
HXDLIN( 934)						Float t2;
HXDLIN( 934)						Float t3;
HXDLIN( 934)						Float t4;
HXLINE( 935)						Float dx;
HXDLIN( 935)						Float dy;
HXLINE( 937)						::openfl::display::_internal::CairoGraphics_obj::cairo->set_antialias(1);
HXLINE( 939)						while((i < l)){
HXLINE( 941)							a_ = i;
HXLINE( 942)							b_ = (i + 1);
HXLINE( 943)							c_ = (i + 2);
HXLINE( 945)							iax = (ind->get(a_) * 2);
HXLINE( 946)							iay = ((ind->get(a_) * 2) + 1);
HXLINE( 947)							ibx = (ind->get(b_) * 2);
HXLINE( 948)							iby = ((ind->get(b_) * 2) + 1);
HXLINE( 949)							icx = (ind->get(c_) * 2);
HXLINE( 950)							icy = ((ind->get(c_) * 2) + 1);
HXLINE( 952)							x1 = (v->get(iax) - offsetX);
HXLINE( 953)							y1 = (v->get(iay) - offsetY);
HXLINE( 954)							x2 = (v->get(ibx) - offsetX);
HXLINE( 955)							y2 = (v->get(iby) - offsetY);
HXLINE( 956)							x3 = (v->get(icx) - offsetX);
HXLINE( 957)							y3 = (v->get(icy) - offsetY);
HXLINE( 959)							 ::Dynamic _hx_switch_0 = c->buffer->o->__get((c->oPos + 3));
            							if (  (_hx_switch_0==0) ){
HXLINE( 969)								if (((((x2 - x1) * (y3 - y1)) - ((y2 - y1) * (x3 - x1))) < 0)) {
HXLINE( 971)									i = (i + 3);
HXLINE( 972)									continue;
            								}
HXLINE( 969)								goto _hx_goto_18;
            							}
            							if (  (_hx_switch_0==2) ){
HXLINE( 962)								if (!(((((x2 - x1) * (y3 - y1)) - ((y2 - y1) * (x3 - x1))) < 0))) {
HXLINE( 964)									i = (i + 3);
HXLINE( 965)									continue;
            								}
HXLINE( 962)								goto _hx_goto_18;
            							}
            							/* default */{
            							}
            							_hx_goto_18:;
HXLINE( 978)							if (colorFill) {
HXLINE( 980)								::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 981)								::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(x1,y1);
HXLINE( 982)								::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x2,y2);
HXLINE( 983)								::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x3,y3);
HXLINE( 984)								::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
HXLINE( 985)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE( 986)								if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE( 986)									::openfl::display::_internal::CairoGraphics_obj::cairo->fillPreserve();
            								}
HXLINE( 987)								i = (i + 3);
HXLINE( 988)								continue;
            							}
HXLINE( 991)							 ::lime::graphics::cairo::Cairo _hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN( 991)							_hx_tmp->set_matrix(::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform->_hx___toMatrix3());
HXLINE( 995)							uvx1 = (uvt->get(iax) * ( (Float)(width) ));
HXLINE( 996)							uvx2 = (uvt->get(ibx) * ( (Float)(width) ));
HXLINE( 997)							uvx3 = (uvt->get(icx) * ( (Float)(width) ));
HXLINE( 998)							uvy1 = (uvt->get(iay) * ( (Float)(height) ));
HXLINE( 999)							uvy2 = (uvt->get(iby) * ( (Float)(height) ));
HXLINE(1000)							uvy3 = (uvt->get(icy) * ( (Float)(height) ));
HXLINE(1002)							denom = ((((uvx1 * (uvy3 - uvy2)) - (uvx2 * uvy3)) + (uvx3 * uvy2)) + ((uvx2 - uvx3) * uvy1));
HXLINE(1004)							if ((denom == 0)) {
HXLINE(1006)								i = (i + 3);
HXLINE(1007)								continue;
            							}
HXLINE(1010)							::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE(1011)							::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(x1,y1);
HXLINE(1012)							::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x2,y2);
HXLINE(1013)							::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x3,y3);
HXLINE(1014)							::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
HXLINE(1017)							x1 = (x1 * currentMatrix->a);
HXLINE(1018)							x2 = (x2 * currentMatrix->a);
HXLINE(1019)							x3 = (x3 * currentMatrix->a);
HXLINE(1020)							y1 = (y1 * currentMatrix->d);
HXLINE(1021)							y2 = (y2 * currentMatrix->d);
HXLINE(1022)							y3 = (y3 * currentMatrix->d);
HXLINE(1024)							t1 = (-(((((uvy1 * (x3 - x2)) - (uvy2 * x3)) + (uvy3 * x2)) + ((uvy2 - uvy3) * x1))) / denom);
HXLINE(1025)							t2 = (((((uvy2 * y3) + (uvy1 * (y2 - y3))) - (uvy3 * y2)) + ((uvy3 - uvy2) * y1)) / denom);
HXLINE(1026)							t3 = (((((uvx1 * (x3 - x2)) - (uvx2 * x3)) + (uvx3 * x2)) + ((uvx2 - uvx3) * x1)) / denom);
HXLINE(1027)							t4 = (-(((((uvx2 * y3) + (uvx1 * (y2 - y3))) - (uvx3 * y2)) + ((uvx3 - uvx2) * y1))) / denom);
HXLINE(1028)							dx = ((((uvx1 * ((uvy3 * x2) - (uvy2 * x3))) + (uvy1 * ((uvx2 * x3) - (uvx3 * x2)))) + (((uvx3 * uvy2) - (uvx2 * uvy3)) * x1)) / denom);
HXLINE(1029)							dy = ((((uvx1 * ((uvy3 * y2) - (uvy2 * y3))) + (uvy1 * ((uvx2 * y3) - (uvx3 * y2)))) + (((uvx3 * uvy2) - (uvx2 * uvy3)) * y1)) / denom);
HXLINE(1031)							{
HXLINE(1031)								 ::lime::math::Matrix3 _this = ::openfl::display::_internal::CairoGraphics_obj::tempMatrix3;
HXDLIN(1031)								_this->a = t1;
HXDLIN(1031)								_this->b = t2;
HXDLIN(1031)								_this->c = t3;
HXDLIN(1031)								_this->d = t4;
HXDLIN(1031)								_this->tx = dx;
HXDLIN(1031)								_this->ty = dy;
            							}
HXLINE(1032)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_matrix(::openfl::display::_internal::CairoGraphics_obj::tempMatrix3);
HXLINE(1033)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE(1034)							if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(1034)								::openfl::display::_internal::CairoGraphics_obj::cairo->fill();
            							}
HXLINE(1036)							i = (i + 3);
            						}
HXLINE(1039)						 ::lime::graphics::cairo::Cairo _hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN(1039)						_hx_tmp1->set_matrix(::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform->_hx___toMatrix3());
            					}
            					break;
            					case (int)14: {
HXLINE( 681)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->oPos = (data1->oPos + 2);
HXDLIN( 681)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 681)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->iPos = (data1->iPos + 1);
HXDLIN( 681)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 681)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->oPos = (data1->oPos + 4);
HXDLIN( 681)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 681)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 681)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 681)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 681)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 681)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->fPos = (data1->fPos + 5);
HXDLIN( 681)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 681)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->oPos = (data1->oPos + 2);
HXDLIN( 681)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 681)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->oPos = (data1->oPos + 4);
HXDLIN( 681)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 681)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 681)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 681)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 681)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 681)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->oPos = (data1->oPos + 4);
HXDLIN( 681)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 681)								data2->iPos = (data2->iPos + 1);
HXDLIN( 681)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 681)								data3->fPos = (data3->fPos + 2);
HXDLIN( 681)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 681)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 681)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 681)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 681)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXDLIN( 681)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 681)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 682)						bool _hx_tmp;
HXDLIN( 682)						if (stroke) {
HXLINE( 682)							_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::hasStroke;
            						}
            						else {
HXLINE( 682)							_hx_tmp = false;
            						}
HXDLIN( 682)						if (_hx_tmp) {
HXLINE( 684)							::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            						}
HXLINE( 687)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((positionX - offsetX),(positionY - offsetY));
HXLINE( 688)						::openfl::display::_internal::CairoGraphics_obj::strokePattern = ::openfl::display::_internal::CairoGraphics_obj::createImagePattern(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
HXLINE( 690)						::openfl::display::_internal::CairoGraphics_obj::hasStroke = true;
            					}
            					break;
            					case (int)15: {
HXLINE( 668)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->oPos = (data1->oPos + 2);
HXDLIN( 668)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 668)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->iPos = (data1->iPos + 1);
HXDLIN( 668)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 668)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->oPos = (data1->oPos + 4);
HXDLIN( 668)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 668)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 668)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 668)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 668)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 668)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->fPos = (data1->fPos + 5);
HXDLIN( 668)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 668)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->oPos = (data1->oPos + 2);
HXDLIN( 668)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 668)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->oPos = (data1->oPos + 4);
HXDLIN( 668)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 668)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 668)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 668)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 668)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 668)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->oPos = (data1->oPos + 4);
HXDLIN( 668)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 668)								data2->iPos = (data2->iPos + 1);
HXDLIN( 668)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 668)								data3->fPos = (data3->fPos + 2);
HXDLIN( 668)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 668)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 668)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 668)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 668)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXDLIN( 668)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 668)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 669)						bool _hx_tmp;
HXDLIN( 669)						if (stroke) {
HXLINE( 669)							_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::hasStroke;
            						}
            						else {
HXLINE( 669)							_hx_tmp = false;
            						}
HXDLIN( 669)						if (_hx_tmp) {
HXLINE( 671)							::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            						}
HXLINE( 674)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((positionX - offsetX),(positionY - offsetY));
HXLINE( 675)						::openfl::display::_internal::CairoGraphics_obj::strokePattern = ::openfl::display::_internal::CairoGraphics_obj::createGradientPattern(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
HXLINE( 678)						::openfl::display::_internal::CairoGraphics_obj::hasStroke = true;
            					}
            					break;
            					case (int)16: {
HXLINE( 605)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->oPos = (data1->oPos + 2);
HXDLIN( 605)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 605)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->iPos = (data1->iPos + 1);
HXDLIN( 605)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 605)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->oPos = (data1->oPos + 4);
HXDLIN( 605)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 605)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 605)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 605)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 605)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 605)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->fPos = (data1->fPos + 5);
HXDLIN( 605)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 605)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->oPos = (data1->oPos + 2);
HXDLIN( 605)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 605)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->oPos = (data1->oPos + 4);
HXDLIN( 605)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 605)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 605)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 605)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 605)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 605)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->oPos = (data1->oPos + 4);
HXDLIN( 605)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 605)								data2->iPos = (data2->iPos + 1);
HXDLIN( 605)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 605)								data3->fPos = (data3->fPos + 2);
HXDLIN( 605)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 605)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 605)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 605)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXDLIN( 605)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 605)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 606)						bool _hx_tmp;
HXDLIN( 606)						if (stroke) {
HXLINE( 606)							_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::hasStroke;
            						}
            						else {
HXLINE( 606)							_hx_tmp = false;
            						}
HXDLIN( 606)						if (_hx_tmp) {
HXLINE( 608)							::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            						}
HXLINE( 611)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((positionX - offsetX),(positionY - offsetY));
HXLINE( 613)						if (::hx::IsNull( c->buffer->o->__get(c->oPos) )) {
HXLINE( 615)							::openfl::display::_internal::CairoGraphics_obj::hasStroke = false;
            						}
            						else {
HXLINE( 619)							::openfl::display::_internal::CairoGraphics_obj::hasStroke = true;
HXLINE( 621)							Float _hx_tmp;
HXDLIN( 621)							if (::hx::IsGreater( c->buffer->o->__get(c->oPos),0 )) {
HXLINE( 621)								_hx_tmp = ( (Float)(c->buffer->o->__get(c->oPos)) );
            							}
            							else {
HXLINE( 621)								_hx_tmp = ( (Float)(1) );
            							}
HXDLIN( 621)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineWidth(_hx_tmp);
HXLINE( 623)							if (::hx::IsNull( c->buffer->o->__get((c->oPos + 3)) )) {
HXLINE( 625)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineJoin(1);
            							}
            							else {
HXLINE( 629)								int _hx_tmp;
HXDLIN( 629)								 ::Dynamic _hx_switch_1 = c->buffer->o->__get((c->oPos + 3));
            								if (  (_hx_switch_1==0) ){
HXLINE( 629)									_hx_tmp = 2;
HXDLIN( 629)									goto _hx_goto_19;
            								}
            								if (  (_hx_switch_1==1) ){
HXLINE( 629)									_hx_tmp = 0;
HXDLIN( 629)									goto _hx_goto_19;
            								}
            								/* default */{
HXLINE( 629)									_hx_tmp = 1;
            								}
            								_hx_goto_19:;
HXDLIN( 629)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineJoin(_hx_tmp);
            							}
HXLINE( 637)							if (::hx::IsNull( c->buffer->o->__get((c->oPos + 2)) )) {
HXLINE( 639)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineCap(1);
            							}
            							else {
HXLINE( 643)								int _hx_tmp;
HXDLIN( 643)								 ::Dynamic _hx_switch_2 = c->buffer->o->__get((c->oPos + 2));
            								if (  (_hx_switch_2==0) ){
HXLINE( 643)									_hx_tmp = 0;
HXDLIN( 643)									goto _hx_goto_20;
            								}
            								if (  (_hx_switch_2==2) ){
HXLINE( 643)									_hx_tmp = 2;
HXDLIN( 643)									goto _hx_goto_20;
            								}
            								/* default */{
HXLINE( 643)									_hx_tmp = 1;
            								}
            								_hx_goto_20:;
HXDLIN( 643)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineCap(_hx_tmp);
            							}
HXLINE( 651)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_miterLimit(c->buffer->f->__get((c->fPos + 1)));
HXLINE( 653)							r = (( (Float)(::hx::UShr((c->buffer->i->__get(c->iPos) & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 654)							g = (( (Float)(::hx::UShr((c->buffer->i->__get(c->iPos) & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 655)							b = (( (Float)((c->buffer->i->__get(c->iPos) & 255)) ) / ( (Float)(255) ));
HXLINE( 657)							if ((c->buffer->f->__get(c->fPos) == 1)) {
HXLINE( 659)								::openfl::display::_internal::CairoGraphics_obj::strokePattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGB(r,g,b);
            							}
            							else {
HXLINE( 663)								::openfl::display::_internal::CairoGraphics_obj::strokePattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(r,g,b,c->buffer->f->__get(c->fPos));
            							}
            						}
            					}
            					break;
            					case (int)17: {
HXLINE( 576)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->oPos = (data1->oPos + 2);
HXDLIN( 576)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 576)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->iPos = (data1->iPos + 1);
HXDLIN( 576)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 576)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->oPos = (data1->oPos + 4);
HXDLIN( 576)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 576)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 576)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 576)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 576)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 576)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->fPos = (data1->fPos + 5);
HXDLIN( 576)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 576)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->oPos = (data1->oPos + 2);
HXDLIN( 576)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 576)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->oPos = (data1->oPos + 4);
HXDLIN( 576)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 576)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 576)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 576)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 576)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 576)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->oPos = (data1->oPos + 4);
HXDLIN( 576)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 576)								data2->iPos = (data2->iPos + 1);
HXDLIN( 576)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 576)								data3->fPos = (data3->fPos + 2);
HXDLIN( 576)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 576)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 576)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 576)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 576)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN( 576)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 576)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 577)						hasPath = true;
HXLINE( 578)						::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY));
HXLINE( 580)						positionX = c->buffer->f->__get(c->fPos);
HXLINE( 581)						positionY = c->buffer->f->__get((c->fPos + 1));
HXLINE( 583)						bool _hx_tmp;
HXDLIN( 583)						if ((positionX == startX)) {
HXLINE( 583)							_hx_tmp = (positionY == startY);
            						}
            						else {
HXLINE( 583)							_hx_tmp = false;
            						}
HXDLIN( 583)						if (_hx_tmp) {
HXLINE( 585)							closeGap = true;
            						}
            					}
            					break;
            					case (int)18: {
HXLINE( 589)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->oPos = (data1->oPos + 2);
HXDLIN( 589)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 589)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->iPos = (data1->iPos + 1);
HXDLIN( 589)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 589)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->oPos = (data1->oPos + 4);
HXDLIN( 589)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 589)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 589)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 589)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 589)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 589)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->fPos = (data1->fPos + 5);
HXDLIN( 589)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 589)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->oPos = (data1->oPos + 2);
HXDLIN( 589)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 589)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->oPos = (data1->oPos + 4);
HXDLIN( 589)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 589)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 589)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 589)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 589)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 589)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->oPos = (data1->oPos + 4);
HXDLIN( 589)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 589)								data2->iPos = (data2->iPos + 1);
HXDLIN( 589)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 589)								data3->fPos = (data3->fPos + 2);
HXDLIN( 589)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 589)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 589)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 589)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 589)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN( 589)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 589)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 590)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY));
HXLINE( 592)						positionX = c->buffer->f->__get(c->fPos);
HXLINE( 593)						positionY = c->buffer->f->__get((c->fPos + 1));
HXLINE( 595)						bool _hx_tmp;
HXDLIN( 595)						bool _hx_tmp1;
HXDLIN( 595)						if (setStart) {
HXLINE( 595)							_hx_tmp1 = (c->buffer->f->__get(c->fPos) != startX);
            						}
            						else {
HXLINE( 595)							_hx_tmp1 = false;
            						}
HXDLIN( 595)						if (_hx_tmp1) {
HXLINE( 595)							_hx_tmp = (c->buffer->f->__get((c->fPos + 1)) != startY);
            						}
            						else {
HXLINE( 595)							_hx_tmp = false;
            						}
HXDLIN( 595)						if (_hx_tmp) {
HXLINE( 597)							closeGap = true;
            						}
HXLINE( 600)						startX = c->buffer->f->__get(c->fPos);
HXLINE( 601)						startY = c->buffer->f->__get((c->fPos + 1));
HXLINE( 602)						setStart = true;
            					}
            					break;
            					case (int)21: {
HXLINE(1042)						{
HXLINE(1042)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->oPos = (data1->oPos + 2);
HXDLIN(1042)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1042)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->iPos = (data1->iPos + 1);
HXDLIN(1042)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1042)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->oPos = (data1->oPos + 4);
HXDLIN(1042)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1042)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1042)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1042)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1042)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1042)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->fPos = (data1->fPos + 5);
HXDLIN(1042)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1042)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->oPos = (data1->oPos + 2);
HXDLIN(1042)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1042)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->oPos = (data1->oPos + 4);
HXDLIN(1042)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1042)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1042)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1042)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1042)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1042)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->oPos = (data1->oPos + 4);
HXDLIN(1042)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1042)									data2->iPos = (data2->iPos + 1);
HXDLIN(1042)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1042)									data3->fPos = (data3->fPos + 2);
HXDLIN(1042)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1042)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1042)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1042)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1042)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn();
HXDLIN(1042)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
            						}
HXLINE(1043)						::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(1);
            					}
            					break;
            					case (int)22: {
HXLINE(1046)						{
HXLINE(1046)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->oPos = (data1->oPos + 2);
HXDLIN(1046)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1046)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->iPos = (data1->iPos + 1);
HXDLIN(1046)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1046)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->oPos = (data1->oPos + 4);
HXDLIN(1046)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1046)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1046)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1046)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1046)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1046)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->fPos = (data1->fPos + 5);
HXDLIN(1046)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1046)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->oPos = (data1->oPos + 2);
HXDLIN(1046)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1046)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->oPos = (data1->oPos + 4);
HXDLIN(1046)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1046)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1046)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1046)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1046)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1046)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->oPos = (data1->oPos + 4);
HXDLIN(1046)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1046)									data2->iPos = (data2->iPos + 1);
HXDLIN(1046)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1046)									data3->fPos = (data3->fPos + 2);
HXDLIN(1046)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1046)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1046)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1046)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1046)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn();
HXDLIN(1046)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
            						}
HXLINE(1047)						::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(0);
            					}
            					break;
            					default:{
HXLINE(1050)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->oPos = (data1->oPos + 2);
HXDLIN(1050)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1050)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->iPos = (data1->iPos + 1);
HXDLIN(1050)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1050)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->oPos = (data1->oPos + 4);
HXDLIN(1050)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1050)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1050)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1050)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1050)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1050)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->fPos = (data1->fPos + 5);
HXDLIN(1050)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1050)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->oPos = (data1->oPos + 2);
HXDLIN(1050)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1050)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->oPos = (data1->oPos + 4);
HXDLIN(1050)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1050)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1050)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1050)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1050)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1050)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->oPos = (data1->oPos + 4);
HXDLIN(1050)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1050)								data2->iPos = (data2->iPos + 1);
HXDLIN(1050)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1050)								data3->fPos = (data3->fPos + 2);
HXDLIN(1050)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1050)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1050)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1050)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1050)						data->prev = type;
            					}
            				}
            			}
            			_hx_goto_14:;
            		}
HXLINE(1054)		data->destroy();
HXLINE(1056)		if (hasPath) {
HXLINE(1058)			bool _hx_tmp;
HXDLIN(1058)			if (stroke) {
HXLINE(1058)				_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::hasStroke;
            			}
            			else {
HXLINE(1058)				_hx_tmp = false;
            			}
HXDLIN(1058)			if (_hx_tmp) {
HXLINE(1060)				if (::openfl::display::_internal::CairoGraphics_obj::hasFill) {
HXLINE(1062)					bool _hx_tmp;
HXDLIN(1062)					if ((positionX == startX)) {
HXLINE(1062)						_hx_tmp = (positionY != startY);
            					}
            					else {
HXLINE(1062)						_hx_tmp = true;
            					}
HXDLIN(1062)					if (_hx_tmp) {
HXLINE(1064)						::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((startX - offsetX),(startY - offsetY));
HXLINE(1065)						closeGap = true;
            					}
HXLINE(1068)					if (closeGap) {
HXLINE(1068)						::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            					}
            				}
            				else {
HXLINE(1070)					bool _hx_tmp;
HXDLIN(1070)					bool _hx_tmp1;
HXDLIN(1070)					if (closeGap) {
HXLINE(1070)						_hx_tmp1 = (positionX == startX);
            					}
            					else {
HXLINE(1070)						_hx_tmp1 = false;
            					}
HXDLIN(1070)					if (_hx_tmp1) {
HXLINE(1070)						_hx_tmp = (positionY == startY);
            					}
            					else {
HXLINE(1070)						_hx_tmp = false;
            					}
HXDLIN(1070)					if (_hx_tmp) {
HXLINE(1072)						::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            					}
            				}
HXLINE(1075)				::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::strokePattern);
HXLINE(1076)				if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(1076)					::openfl::display::_internal::CairoGraphics_obj::cairo->strokePreserve();
            				}
            			}
HXLINE(1079)			bool _hx_tmp1;
HXDLIN(1079)			if (!(stroke)) {
HXLINE(1079)				_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::hasFill;
            			}
            			else {
HXLINE(1079)				_hx_tmp1 = false;
            			}
HXDLIN(1079)			if (_hx_tmp1) {
HXLINE(1081)				::openfl::display::_internal::CairoGraphics_obj::cairo->translate(-(::openfl::display::_internal::CairoGraphics_obj::bounds->x),-(::openfl::display::_internal::CairoGraphics_obj::bounds->y));
HXLINE(1083)				if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix )) {
HXLINE(1085)					 ::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(1086)					matrix->copyFrom(::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix);
HXLINE(1087)					matrix->invert();
HXLINE(1089)					if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::pendingMatrix )) {
HXLINE(1091)						matrix->concat(::openfl::display::_internal::CairoGraphics_obj::pendingMatrix);
            					}
HXLINE(1094)					 ::Dynamic _hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::fillPattern;
HXDLIN(1094)					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(_hx_tmp,matrix->_hx___toMatrix3());
HXLINE(1096)					::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
            				}
HXLINE(1099)				::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE(1101)				if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::pendingMatrix )) {
HXLINE(1103)					 ::lime::graphics::cairo::Cairo _hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN(1103)					_hx_tmp->transform(::openfl::display::_internal::CairoGraphics_obj::pendingMatrix->_hx___toMatrix3());
HXLINE(1104)					if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(1104)						::openfl::display::_internal::CairoGraphics_obj::cairo->fillPreserve();
            					}
HXLINE(1105)					 ::lime::graphics::cairo::Cairo _hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN(1105)					_hx_tmp1->transform(::openfl::display::_internal::CairoGraphics_obj::inversePendingMatrix->_hx___toMatrix3());
            				}
            				else {
HXLINE(1109)					if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(1109)						::openfl::display::_internal::CairoGraphics_obj::cairo->fillPreserve();
            					}
            				}
HXLINE(1112)				::openfl::display::_internal::CairoGraphics_obj::cairo->translate(::openfl::display::_internal::CairoGraphics_obj::bounds->x,::openfl::display::_internal::CairoGraphics_obj::bounds->y);
HXLINE(1113)				::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,playCommands,(void))

void CairoGraphics_obj::quadraticCurveTo(Float cx,Float cy,Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_1119_quadraticCurveTo)
HXLINE(1120)		 ::lime::math::Vector2 current = null();
HXLINE(1122)		if (!(::openfl::display::_internal::CairoGraphics_obj::cairo->get_hasCurrentPoint())) {
HXLINE(1124)			::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(cx,cy);
HXLINE(1125)			current =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,cx,cy);
            		}
            		else {
HXLINE(1129)			current = ::openfl::display::_internal::CairoGraphics_obj::cairo->get_currentPoint();
            		}
HXLINE(1132)		Float cx1 = (current->x + (((Float)0.66666666666666663) * (cx - current->x)));
HXLINE(1133)		Float cy1 = (current->y + (((Float)0.66666666666666663) * (cy - current->y)));
HXLINE(1134)		Float cx2 = (x + (((Float)0.66666666666666663) * (cx - x)));
HXLINE(1135)		Float cy2 = (y + (((Float)0.66666666666666663) * (cy - y)));
HXLINE(1137)		::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(cx1,cy1,cx2,cy2,x,y);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,quadraticCurveTo,(void))

void CairoGraphics_obj::render( ::openfl::display::Graphics graphics, ::openfl::display::CairoRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_1142_render)
HXLINE(1144)		::openfl::display::_internal::CairoGraphics_obj::graphics = graphics;
HXLINE(1145)		::openfl::display::_internal::CairoGraphics_obj::allowSmoothing = renderer->_hx___allowSmoothing;
HXLINE(1146)		::openfl::display::_internal::CairoGraphics_obj::worldAlpha = renderer->_hx___getAlpha(graphics->_hx___owner->_hx___worldAlpha);
HXLINE(1151)		Float pixelRatio = renderer->_hx___pixelRatio;
HXLINE(1154)		graphics->_hx___update(renderer->_hx___worldTransform,pixelRatio);
HXLINE(1156)		bool _hx_tmp;
HXDLIN(1156)		if (graphics->_hx___softwareDirty) {
HXLINE(1156)			_hx_tmp = graphics->_hx___managed;
            		}
            		else {
HXLINE(1156)			_hx_tmp = true;
            		}
HXDLIN(1156)		if (_hx_tmp) {
HXLINE(1156)			return;
            		}
HXLINE(1158)		::openfl::display::_internal::CairoGraphics_obj::bounds = graphics->_hx___bounds;
HXLINE(1160)		int width = graphics->_hx___width;
HXLINE(1161)		int height = graphics->_hx___height;
HXLINE(1163)		bool _hx_tmp1;
HXDLIN(1163)		bool _hx_tmp2;
HXDLIN(1163)		bool _hx_tmp3;
HXDLIN(1163)		bool _hx_tmp4;
HXDLIN(1163)		if (graphics->_hx___visible) {
HXLINE(1163)			_hx_tmp4 = (graphics->_hx___commands->get_length() == 0);
            		}
            		else {
HXLINE(1163)			_hx_tmp4 = true;
            		}
HXDLIN(1163)		if (!(_hx_tmp4)) {
HXLINE(1163)			_hx_tmp3 = ::hx::IsNull( ::openfl::display::_internal::CairoGraphics_obj::bounds );
            		}
            		else {
HXLINE(1163)			_hx_tmp3 = true;
            		}
HXDLIN(1163)		if (!(_hx_tmp3)) {
HXLINE(1163)			_hx_tmp2 = (width < 1);
            		}
            		else {
HXLINE(1163)			_hx_tmp2 = true;
            		}
HXDLIN(1163)		if (!(_hx_tmp2)) {
HXLINE(1163)			_hx_tmp1 = (height < 1);
            		}
            		else {
HXLINE(1163)			_hx_tmp1 = true;
            		}
HXDLIN(1163)		if (_hx_tmp1) {
HXLINE(1165)			graphics->_hx___cairo = null();
HXLINE(1166)			graphics->_hx___bitmap = null();
            		}
            		else {
HXLINE(1170)			::openfl::display::_internal::CairoGraphics_obj::hitTesting = false;
HXLINE(1171)			bool needsUpscaling = false;
HXLINE(1173)			if (::hx::IsNotNull( graphics->_hx___cairo )) {
HXLINE(1175)				 ::Dynamic surface = graphics->_hx___cairo->get_target();
HXLINE(1177)				bool _hx_tmp;
HXDLIN(1177)				if ((width <= ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(surface))) {
HXLINE(1177)					_hx_tmp = (height > ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(surface));
            				}
            				else {
HXLINE(1177)					_hx_tmp = true;
            				}
HXDLIN(1177)				if (_hx_tmp) {
HXLINE(1179)					graphics->_hx___cairo = null();
HXLINE(1180)					needsUpscaling = true;
            				}
            			}
HXLINE(1184)			bool _hx_tmp;
HXDLIN(1184)			if (::hx::IsNotNull( graphics->_hx___cairo )) {
HXLINE(1184)				_hx_tmp = ::hx::IsNull( graphics->_hx___bitmap );
            			}
            			else {
HXLINE(1184)				_hx_tmp = true;
            			}
HXDLIN(1184)			if (_hx_tmp) {
HXLINE(1186)				 ::openfl::display::BitmapData bitmap;
HXDLIN(1186)				if (needsUpscaling) {
HXLINE(1186)					int bitmap1 = ::Std_obj::_hx_int((( (Float)(width) ) * ((Float)1.25)));
HXDLIN(1186)					bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmap1,::Std_obj::_hx_int((( (Float)(height) ) * ((Float)1.25))),true,0);
            				}
            				else {
HXLINE(1186)					bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,width,height,true,0);
            				}
HXLINE(1187)				 ::Dynamic surface = bitmap->getSurface();
HXLINE(1188)				graphics->_hx___cairo =  ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,surface);
HXLINE(1189)				graphics->_hx___bitmap = bitmap;
            			}
HXLINE(1192)			::openfl::display::_internal::CairoGraphics_obj::cairo = graphics->_hx___cairo;
HXLINE(1194)			renderer->_hx___setBlendModeCairo(::openfl::display::_internal::CairoGraphics_obj::cairo,10);
HXLINE(1195)			renderer->applyMatrix(graphics->_hx___renderTransform,::openfl::display::_internal::CairoGraphics_obj::cairo);
HXLINE(1197)			::openfl::display::_internal::CairoGraphics_obj::cairo->setOperator(0);
HXLINE(1198)			::openfl::display::_internal::CairoGraphics_obj::cairo->paint();
HXLINE(1199)			::openfl::display::_internal::CairoGraphics_obj::cairo->setOperator(2);
HXLINE(1201)			::openfl::display::_internal::CairoGraphics_obj::fillCommands->clear();
HXLINE(1202)			::openfl::display::_internal::CairoGraphics_obj::strokeCommands->clear();
HXLINE(1204)			::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
HXLINE(1205)			::openfl::display::_internal::CairoGraphics_obj::hasStroke = false;
HXLINE(1207)			::openfl::display::_internal::CairoGraphics_obj::fillPattern = null();
HXLINE(1208)			::openfl::display::_internal::CairoGraphics_obj::strokePattern = null();
HXLINE(1210)			bool hasLineStyle = false;
HXLINE(1211)			Float initStrokeX = ((Float)0.0);
HXLINE(1212)			Float initStrokeY = ((Float)0.0);
HXLINE(1214)			 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE(1216)			{
HXLINE(1216)				int _g = 0;
HXDLIN(1216)				::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN(1216)				while((_g < _g1->length)){
HXLINE(1216)					 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN(1216)					_g = (_g + 1);
HXLINE(1218)					switch((int)(type->_hx_getIndex())){
            						case (int)0: case (int)1: case (int)2: case (int)3: {
HXLINE(1330)							::openfl::display::_internal::CairoGraphics_obj::endFill();
HXLINE(1331)							::openfl::display::_internal::CairoGraphics_obj::endStroke();
HXLINE(1333)							if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn() )) {
HXLINE(1335)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->oPos = (data1->oPos + 2);
HXDLIN(1335)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1335)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->iPos = (data1->iPos + 1);
HXDLIN(1335)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1335)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->oPos = (data1->oPos + 4);
HXDLIN(1335)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1335)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1335)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1335)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1335)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1335)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->fPos = (data1->fPos + 5);
HXDLIN(1335)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1335)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->oPos = (data1->oPos + 2);
HXDLIN(1335)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1335)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->oPos = (data1->oPos + 4);
HXDLIN(1335)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1335)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1335)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1335)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1335)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1335)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->oPos = (data1->oPos + 4);
HXDLIN(1335)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1335)										data2->iPos = (data2->iPos + 1);
HXDLIN(1335)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1335)										data3->fPos = (data3->fPos + 2);
HXDLIN(1335)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1335)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE(1335)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1335)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE(1335)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN(1335)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1335)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1336)								::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
HXLINE(1337)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            							}
            							else {
HXLINE(1339)								if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn() )) {
HXLINE(1341)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->oPos = (data1->oPos + 2);
HXDLIN(1341)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1341)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->iPos = (data1->iPos + 1);
HXDLIN(1341)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1341)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->oPos = (data1->oPos + 4);
HXDLIN(1341)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1341)											data2->iiPos = (data2->iiPos + 2);
HXDLIN(1341)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1341)											data3->ffPos = (data3->ffPos + 1);
HXDLIN(1341)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1341)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->fPos = (data1->fPos + 5);
HXDLIN(1341)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1341)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->oPos = (data1->oPos + 2);
HXDLIN(1341)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1341)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->oPos = (data1->oPos + 4);
HXDLIN(1341)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1341)											data2->iiPos = (data2->iiPos + 2);
HXDLIN(1341)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1341)											data3->ffPos = (data3->ffPos + 1);
HXDLIN(1341)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1341)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->oPos = (data1->oPos + 4);
HXDLIN(1341)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1341)											data2->iPos = (data2->iPos + 1);
HXDLIN(1341)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1341)											data3->fPos = (data3->fPos + 2);
HXDLIN(1341)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1341)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE(1341)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1341)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE(1341)									data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXDLIN(1341)									 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1341)									 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1342)									::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
HXLINE(1344)									::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            								}
            								else {
HXLINE(1347)									if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn() )) {
HXLINE(1349)										switch((int)(data->prev->_hx_getIndex())){
            											case (int)0: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->oPos = (data1->oPos + 2);
HXDLIN(1349)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1349)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)1: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->iPos = (data1->iPos + 1);
HXDLIN(1349)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1349)												data2->fPos = (data2->fPos + 1);
            											}
            											break;
            											case (int)2: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->oPos = (data1->oPos + 4);
HXDLIN(1349)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1349)												data2->iiPos = (data2->iiPos + 2);
HXDLIN(1349)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1349)												data3->ffPos = (data3->ffPos + 1);
HXDLIN(1349)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1349)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)3: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)4: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->fPos = (data1->fPos + 6);
            											}
            											break;
            											case (int)5: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)6: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->fPos = (data1->fPos + 3);
            											}
            											break;
            											case (int)7: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)8: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->oPos = (data1->oPos + 3);
            											}
            											break;
            											case (int)9: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)10: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->fPos = (data1->fPos + 5);
HXDLIN(1349)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1349)												data2->oPos = (data2->oPos + 1);
            											}
            											break;
            											case (int)12: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->oPos = (data1->oPos + 4);
            											}
            											break;
            											case (int)13: {
            											}
            											break;
            											case (int)14: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->oPos = (data1->oPos + 2);
HXDLIN(1349)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1349)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)15: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->oPos = (data1->oPos + 4);
HXDLIN(1349)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1349)												data2->iiPos = (data2->iiPos + 2);
HXDLIN(1349)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1349)												data3->ffPos = (data3->ffPos + 1);
HXDLIN(1349)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1349)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)16: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->oPos = (data1->oPos + 4);
HXDLIN(1349)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1349)												data2->iPos = (data2->iPos + 1);
HXDLIN(1349)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1349)												data3->fPos = (data3->fPos + 2);
HXDLIN(1349)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1349)												data4->bPos = (data4->bPos + 1);
            											}
            											break;
            											case (int)17: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)18: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)19: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)20: {
HXLINE(1349)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1349)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)21: case (int)22: {
            											}
            											break;
            											default:{
            											}
            										}
HXLINE(1349)										data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN(1349)										 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1349)										 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1350)										::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
HXLINE(1351)										::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
            									}
            									else {
HXLINE(1355)										switch((int)(data->prev->_hx_getIndex())){
            											case (int)0: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->oPos = (data1->oPos + 2);
HXDLIN(1355)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1355)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)1: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->iPos = (data1->iPos + 1);
HXDLIN(1355)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1355)												data2->fPos = (data2->fPos + 1);
            											}
            											break;
            											case (int)2: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->oPos = (data1->oPos + 4);
HXDLIN(1355)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1355)												data2->iiPos = (data2->iiPos + 2);
HXDLIN(1355)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1355)												data3->ffPos = (data3->ffPos + 1);
HXDLIN(1355)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1355)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)3: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)4: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->fPos = (data1->fPos + 6);
            											}
            											break;
            											case (int)5: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)6: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->fPos = (data1->fPos + 3);
            											}
            											break;
            											case (int)7: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)8: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->oPos = (data1->oPos + 3);
            											}
            											break;
            											case (int)9: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)10: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->fPos = (data1->fPos + 5);
HXDLIN(1355)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1355)												data2->oPos = (data2->oPos + 1);
            											}
            											break;
            											case (int)12: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->oPos = (data1->oPos + 4);
            											}
            											break;
            											case (int)13: {
            											}
            											break;
            											case (int)14: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->oPos = (data1->oPos + 2);
HXDLIN(1355)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1355)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)15: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->oPos = (data1->oPos + 4);
HXDLIN(1355)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1355)												data2->iiPos = (data2->iiPos + 2);
HXDLIN(1355)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1355)												data3->ffPos = (data3->ffPos + 1);
HXDLIN(1355)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1355)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)16: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->oPos = (data1->oPos + 4);
HXDLIN(1355)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1355)												data2->iPos = (data2->iPos + 1);
HXDLIN(1355)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1355)												data3->fPos = (data3->fPos + 2);
HXDLIN(1355)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1355)												data4->bPos = (data4->bPos + 1);
            											}
            											break;
            											case (int)17: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)18: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)19: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)20: {
HXLINE(1355)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1355)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)21: case (int)22: {
            											}
            											break;
            											default:{
            											}
            										}
HXLINE(1355)										data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN(1355)										 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1355)										 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1356)										::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginFill(c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos));
HXLINE(1357)										::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginFill(c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos));
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE(1221)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->oPos = (data1->oPos + 2);
HXDLIN(1221)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1221)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->iPos = (data1->iPos + 1);
HXDLIN(1221)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1221)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->oPos = (data1->oPos + 4);
HXDLIN(1221)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1221)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1221)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1221)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1221)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1221)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->fPos = (data1->fPos + 5);
HXDLIN(1221)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1221)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->oPos = (data1->oPos + 2);
HXDLIN(1221)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1221)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->oPos = (data1->oPos + 4);
HXDLIN(1221)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1221)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1221)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1221)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1221)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1221)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->oPos = (data1->oPos + 4);
HXDLIN(1221)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1221)									data2->iPos = (data2->iPos + 1);
HXDLIN(1221)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1221)									data3->fPos = (data3->fPos + 2);
HXDLIN(1221)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1221)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1221)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1221)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1221)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN(1221)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1221)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1222)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
HXLINE(1224)							if (hasLineStyle) {
HXLINE(1226)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
            							}
            							else {
HXLINE(1230)								initStrokeX = c->buffer->f->__get((c->fPos + 4));
HXLINE(1231)								initStrokeY = c->buffer->f->__get((c->fPos + 5));
            							}
            						}
            						break;
            						case (int)5: {
HXLINE(1235)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->oPos = (data1->oPos + 2);
HXDLIN(1235)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1235)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->iPos = (data1->iPos + 1);
HXDLIN(1235)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1235)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->oPos = (data1->oPos + 4);
HXDLIN(1235)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1235)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1235)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1235)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1235)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1235)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->fPos = (data1->fPos + 5);
HXDLIN(1235)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1235)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->oPos = (data1->oPos + 2);
HXDLIN(1235)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1235)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->oPos = (data1->oPos + 4);
HXDLIN(1235)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1235)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1235)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1235)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1235)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1235)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->oPos = (data1->oPos + 4);
HXDLIN(1235)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1235)									data2->iPos = (data2->iPos + 1);
HXDLIN(1235)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1235)									data3->fPos = (data3->fPos + 2);
HXDLIN(1235)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1235)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1235)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1235)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1235)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN(1235)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1235)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1236)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE(1238)							if (hasLineStyle) {
HXLINE(1240)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            							}
            							else {
HXLINE(1244)								initStrokeX = c->buffer->f->__get((c->fPos + 2));
HXLINE(1245)								initStrokeY = c->buffer->f->__get((c->fPos + 3));
            							}
            						}
            						break;
            						case (int)6: {
HXLINE(1361)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 2);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1361)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->iPos = (data1->iPos + 1);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1361)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 4);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1361)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1361)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1361)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->fPos = (data1->fPos + 5);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1361)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 2);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1361)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 4);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1361)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1361)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1361)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 4);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1361)									data2->iPos = (data2->iPos + 1);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1361)									data3->fPos = (data3->fPos + 2);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1361)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1361)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN(1361)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1361)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1362)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
HXLINE(1364)							if (hasLineStyle) {
HXLINE(1366)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
            							}
            						}
            						break;
            						case (int)7: {
HXLINE(1370)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->oPos = (data1->oPos + 2);
HXDLIN(1370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1370)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->iPos = (data1->iPos + 1);
HXDLIN(1370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1370)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->oPos = (data1->oPos + 4);
HXDLIN(1370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1370)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1370)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1370)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1370)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1370)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->fPos = (data1->fPos + 5);
HXDLIN(1370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1370)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->oPos = (data1->oPos + 2);
HXDLIN(1370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1370)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->oPos = (data1->oPos + 4);
HXDLIN(1370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1370)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1370)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1370)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1370)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1370)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->oPos = (data1->oPos + 4);
HXDLIN(1370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1370)									data2->iPos = (data2->iPos + 1);
HXDLIN(1370)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1370)									data3->fPos = (data3->fPos + 2);
HXDLIN(1370)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1370)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1370)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1370)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN(1370)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1370)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1371)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE(1373)							if (hasLineStyle) {
HXLINE(1375)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            							}
            						}
            						break;
            						case (int)8: {
HXLINE(1397)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->oPos = (data1->oPos + 2);
HXDLIN(1397)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1397)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->iPos = (data1->iPos + 1);
HXDLIN(1397)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1397)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->oPos = (data1->oPos + 4);
HXDLIN(1397)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1397)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1397)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1397)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1397)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1397)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->fPos = (data1->fPos + 5);
HXDLIN(1397)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1397)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->oPos = (data1->oPos + 2);
HXDLIN(1397)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1397)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->oPos = (data1->oPos + 4);
HXDLIN(1397)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1397)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1397)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1397)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1397)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1397)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->oPos = (data1->oPos + 4);
HXDLIN(1397)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1397)									data2->iPos = (data2->iPos + 1);
HXDLIN(1397)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1397)									data3->fPos = (data3->fPos + 2);
HXDLIN(1397)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1397)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1397)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1397)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1397)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN(1397)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1397)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1398)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawQuads(( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) ),( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) ));
            						}
            						break;
            						case (int)9: {
HXLINE(1379)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->oPos = (data1->oPos + 2);
HXDLIN(1379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1379)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->iPos = (data1->iPos + 1);
HXDLIN(1379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1379)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->oPos = (data1->oPos + 4);
HXDLIN(1379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1379)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1379)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1379)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1379)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1379)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->fPos = (data1->fPos + 5);
HXDLIN(1379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1379)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->oPos = (data1->oPos + 2);
HXDLIN(1379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1379)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->oPos = (data1->oPos + 4);
HXDLIN(1379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1379)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1379)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1379)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1379)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1379)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->oPos = (data1->oPos + 4);
HXDLIN(1379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1379)									data2->iPos = (data2->iPos + 1);
HXDLIN(1379)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1379)									data3->fPos = (data3->fPos + 2);
HXDLIN(1379)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1379)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1379)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1379)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN(1379)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1379)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1380)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE(1382)							if (hasLineStyle) {
HXLINE(1384)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            							}
            						}
            						break;
            						case (int)10: {
HXLINE(1388)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->oPos = (data1->oPos + 2);
HXDLIN(1388)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1388)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->iPos = (data1->iPos + 1);
HXDLIN(1388)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1388)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->oPos = (data1->oPos + 4);
HXDLIN(1388)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1388)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1388)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1388)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1388)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1388)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->fPos = (data1->fPos + 5);
HXDLIN(1388)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1388)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->oPos = (data1->oPos + 2);
HXDLIN(1388)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1388)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->oPos = (data1->oPos + 4);
HXDLIN(1388)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1388)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1388)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1388)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1388)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1388)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->oPos = (data1->oPos + 4);
HXDLIN(1388)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1388)									data2->iPos = (data2->iPos + 1);
HXDLIN(1388)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1388)									data3->fPos = (data3->fPos + 2);
HXDLIN(1388)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1388)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1388)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1388)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1388)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN(1388)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1388)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1389)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
HXLINE(1391)							if (hasLineStyle) {
HXLINE(1393)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            							}
            						}
            						break;
            						case (int)12: {
HXLINE(1401)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->oPos = (data1->oPos + 2);
HXDLIN(1401)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1401)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->iPos = (data1->iPos + 1);
HXDLIN(1401)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1401)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->oPos = (data1->oPos + 4);
HXDLIN(1401)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1401)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1401)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1401)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1401)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1401)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->fPos = (data1->fPos + 5);
HXDLIN(1401)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1401)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->oPos = (data1->oPos + 2);
HXDLIN(1401)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1401)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->oPos = (data1->oPos + 4);
HXDLIN(1401)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1401)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1401)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1401)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1401)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1401)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->oPos = (data1->oPos + 4);
HXDLIN(1401)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1401)									data2->iPos = (data2->iPos + 1);
HXDLIN(1401)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1401)									data3->fPos = (data3->fPos + 2);
HXDLIN(1401)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1401)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1401)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1401)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN(1401)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1401)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1402)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawTriangles(( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) ),( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) ),c->buffer->o->__get((c->oPos + 3)));
            						}
            						break;
            						case (int)13: {
HXLINE(1277)							{
HXLINE(1277)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->oPos = (data1->oPos + 2);
HXDLIN(1277)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1277)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->iPos = (data1->iPos + 1);
HXDLIN(1277)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1277)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->oPos = (data1->oPos + 4);
HXDLIN(1277)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1277)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1277)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1277)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1277)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1277)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->fPos = (data1->fPos + 5);
HXDLIN(1277)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1277)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->oPos = (data1->oPos + 2);
HXDLIN(1277)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1277)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->oPos = (data1->oPos + 4);
HXDLIN(1277)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1277)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1277)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1277)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1277)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1277)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->oPos = (data1->oPos + 4);
HXDLIN(1277)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1277)										data2->iPos = (data2->iPos + 1);
HXDLIN(1277)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1277)										data3->fPos = (data3->fPos + 2);
HXDLIN(1277)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1277)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE(1277)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1277)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE(1277)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn();
HXDLIN(1277)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE(1278)							::openfl::display::_internal::CairoGraphics_obj::endFill();
HXLINE(1279)							::openfl::display::_internal::CairoGraphics_obj::endStroke();
HXLINE(1280)							::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
HXLINE(1281)							hasLineStyle = false;
HXLINE(1282)							::openfl::display::_internal::CairoGraphics_obj::bitmapFill = null();
HXLINE(1283)							initStrokeX = ( (Float)(0) );
HXLINE(1284)							initStrokeY = ( (Float)(0) );
            						}
            						break;
            						case (int)14: {
HXLINE(1301)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->oPos = (data1->oPos + 2);
HXDLIN(1301)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1301)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->iPos = (data1->iPos + 1);
HXDLIN(1301)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1301)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->oPos = (data1->oPos + 4);
HXDLIN(1301)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1301)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1301)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1301)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1301)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1301)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->fPos = (data1->fPos + 5);
HXDLIN(1301)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1301)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->oPos = (data1->oPos + 2);
HXDLIN(1301)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1301)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->oPos = (data1->oPos + 4);
HXDLIN(1301)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1301)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1301)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1301)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1301)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1301)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->oPos = (data1->oPos + 4);
HXDLIN(1301)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1301)									data2->iPos = (data2->iPos + 1);
HXDLIN(1301)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1301)									data3->fPos = (data3->fPos + 2);
HXDLIN(1301)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1301)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1301)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1301)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXDLIN(1301)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1301)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1303)							bool _hx_tmp;
HXDLIN(1303)							if (!(hasLineStyle)) {
HXLINE(1303)								if ((initStrokeX == 0)) {
HXLINE(1303)									_hx_tmp = (initStrokeY != 0);
            								}
            								else {
HXLINE(1303)									_hx_tmp = true;
            								}
            							}
            							else {
HXLINE(1303)								_hx_tmp = false;
            							}
HXDLIN(1303)							if (_hx_tmp) {
HXLINE(1305)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(initStrokeX,initStrokeY);
HXLINE(1306)								initStrokeX = ( (Float)(0) );
HXLINE(1307)								initStrokeY = ( (Float)(0) );
            							}
HXLINE(1310)							hasLineStyle = true;
HXLINE(1311)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineBitmapStyle(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            						}
            						break;
            						case (int)15: {
HXLINE(1287)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->oPos = (data1->oPos + 2);
HXDLIN(1287)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1287)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->iPos = (data1->iPos + 1);
HXDLIN(1287)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1287)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->oPos = (data1->oPos + 4);
HXDLIN(1287)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1287)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1287)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1287)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1287)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1287)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->fPos = (data1->fPos + 5);
HXDLIN(1287)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1287)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->oPos = (data1->oPos + 2);
HXDLIN(1287)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1287)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->oPos = (data1->oPos + 4);
HXDLIN(1287)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1287)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1287)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1287)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1287)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1287)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->oPos = (data1->oPos + 4);
HXDLIN(1287)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1287)									data2->iPos = (data2->iPos + 1);
HXDLIN(1287)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1287)									data3->fPos = (data3->fPos + 2);
HXDLIN(1287)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1287)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1287)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1287)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXDLIN(1287)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1287)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1289)							bool _hx_tmp;
HXDLIN(1289)							if (!(hasLineStyle)) {
HXLINE(1289)								if ((initStrokeX == 0)) {
HXLINE(1289)									_hx_tmp = (initStrokeY != 0);
            								}
            								else {
HXLINE(1289)									_hx_tmp = true;
            								}
            							}
            							else {
HXLINE(1289)								_hx_tmp = false;
            							}
HXDLIN(1289)							if (_hx_tmp) {
HXLINE(1291)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(initStrokeX,initStrokeY);
HXLINE(1292)								initStrokeX = ( (Float)(0) );
HXLINE(1293)								initStrokeY = ( (Float)(0) );
            							}
HXLINE(1296)							hasLineStyle = true;
HXLINE(1297)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineGradientStyle(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            						}
            						break;
            						case (int)16: {
HXLINE(1314)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->oPos = (data1->oPos + 2);
HXDLIN(1314)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1314)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->iPos = (data1->iPos + 1);
HXDLIN(1314)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1314)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->oPos = (data1->oPos + 4);
HXDLIN(1314)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1314)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1314)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1314)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1314)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1314)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->fPos = (data1->fPos + 5);
HXDLIN(1314)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1314)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->oPos = (data1->oPos + 2);
HXDLIN(1314)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1314)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->oPos = (data1->oPos + 4);
HXDLIN(1314)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1314)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1314)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1314)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1314)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1314)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->oPos = (data1->oPos + 4);
HXDLIN(1314)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1314)									data2->iPos = (data2->iPos + 1);
HXDLIN(1314)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1314)									data3->fPos = (data3->fPos + 2);
HXDLIN(1314)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1314)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1314)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1314)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1314)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXDLIN(1314)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1314)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1316)							bool _hx_tmp;
HXDLIN(1316)							if (!(hasLineStyle)) {
HXLINE(1316)								_hx_tmp = ::hx::IsNotNull( c->buffer->o->__get(c->oPos) );
            							}
            							else {
HXLINE(1316)								_hx_tmp = false;
            							}
HXDLIN(1316)							if (_hx_tmp) {
HXLINE(1318)								bool _hx_tmp;
HXDLIN(1318)								if ((initStrokeX == 0)) {
HXLINE(1318)									_hx_tmp = (initStrokeY != 0);
            								}
            								else {
HXLINE(1318)									_hx_tmp = true;
            								}
HXDLIN(1318)								if (_hx_tmp) {
HXLINE(1320)									::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(initStrokeX,initStrokeY);
HXLINE(1321)									initStrokeX = ( (Float)(0) );
HXLINE(1322)									initStrokeY = ( (Float)(0) );
            								}
            							}
HXLINE(1326)							hasLineStyle = ::hx::IsNotNull( c->buffer->o->__get(c->oPos) );
HXLINE(1327)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineStyle(c->buffer->o->__get(c->oPos),c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos),c->buffer->b->__get(c->bPos),c->buffer->o->__get((c->oPos + 1)),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get((c->fPos + 1)));
            						}
            						break;
            						case (int)17: {
HXLINE(1249)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->oPos = (data1->oPos + 2);
HXDLIN(1249)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1249)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->iPos = (data1->iPos + 1);
HXDLIN(1249)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1249)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->oPos = (data1->oPos + 4);
HXDLIN(1249)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1249)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1249)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1249)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1249)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1249)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->fPos = (data1->fPos + 5);
HXDLIN(1249)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1249)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->oPos = (data1->oPos + 2);
HXDLIN(1249)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1249)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->oPos = (data1->oPos + 4);
HXDLIN(1249)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1249)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1249)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1249)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1249)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1249)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->oPos = (data1->oPos + 4);
HXDLIN(1249)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1249)									data2->iPos = (data2->iPos + 1);
HXDLIN(1249)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1249)									data3->fPos = (data3->fPos + 2);
HXDLIN(1249)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1249)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1249)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1249)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1249)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN(1249)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1249)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1250)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
HXLINE(1252)							if (hasLineStyle) {
HXLINE(1254)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            							}
            							else {
HXLINE(1258)								initStrokeX = c->buffer->f->__get(c->fPos);
HXLINE(1259)								initStrokeY = c->buffer->f->__get((c->fPos + 1));
            							}
            						}
            						break;
            						case (int)18: {
HXLINE(1263)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->oPos = (data1->oPos + 2);
HXDLIN(1263)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1263)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->iPos = (data1->iPos + 1);
HXDLIN(1263)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1263)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->oPos = (data1->oPos + 4);
HXDLIN(1263)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1263)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1263)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1263)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1263)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1263)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->fPos = (data1->fPos + 5);
HXDLIN(1263)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1263)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->oPos = (data1->oPos + 2);
HXDLIN(1263)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1263)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->oPos = (data1->oPos + 4);
HXDLIN(1263)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1263)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1263)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1263)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1263)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1263)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->oPos = (data1->oPos + 4);
HXDLIN(1263)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1263)									data2->iPos = (data2->iPos + 1);
HXDLIN(1263)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1263)									data3->fPos = (data3->fPos + 2);
HXDLIN(1263)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1263)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1263)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1263)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1263)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN(1263)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1263)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1264)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
HXLINE(1266)							if (hasLineStyle) {
HXLINE(1268)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            							}
            							else {
HXLINE(1272)								initStrokeX = c->buffer->f->__get(c->fPos);
HXLINE(1273)								initStrokeY = c->buffer->f->__get((c->fPos + 1));
            							}
            						}
            						break;
            						case (int)19: {
HXLINE(1405)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->oPos = (data1->oPos + 2);
HXDLIN(1405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1405)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->iPos = (data1->iPos + 1);
HXDLIN(1405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1405)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->oPos = (data1->oPos + 4);
HXDLIN(1405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1405)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1405)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1405)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1405)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1405)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->fPos = (data1->fPos + 5);
HXDLIN(1405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1405)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->oPos = (data1->oPos + 2);
HXDLIN(1405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1405)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->oPos = (data1->oPos + 4);
HXDLIN(1405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1405)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1405)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1405)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1405)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1405)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->oPos = (data1->oPos + 4);
HXDLIN(1405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1405)									data2->iPos = (data2->iPos + 1);
HXDLIN(1405)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1405)									data3->fPos = (data3->fPos + 2);
HXDLIN(1405)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1405)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1405)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1405)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_BLEND_MODE_dyn();
HXDLIN(1405)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1405)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1406)							renderer->_hx___setBlendModeCairo(::openfl::display::_internal::CairoGraphics_obj::cairo,c->buffer->o->__get(c->oPos));
            						}
            						break;
            						case (int)21: {
HXLINE(1409)							{
HXLINE(1409)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->oPos = (data1->oPos + 2);
HXDLIN(1409)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1409)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->iPos = (data1->iPos + 1);
HXDLIN(1409)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1409)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->oPos = (data1->oPos + 4);
HXDLIN(1409)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1409)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1409)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1409)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1409)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1409)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->fPos = (data1->fPos + 5);
HXDLIN(1409)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1409)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->oPos = (data1->oPos + 2);
HXDLIN(1409)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1409)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->oPos = (data1->oPos + 4);
HXDLIN(1409)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1409)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1409)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1409)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1409)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1409)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->oPos = (data1->oPos + 4);
HXDLIN(1409)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1409)										data2->iPos = (data2->iPos + 1);
HXDLIN(1409)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1409)										data3->fPos = (data3->fPos + 2);
HXDLIN(1409)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1409)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE(1409)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE(1409)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn();
HXDLIN(1409)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE(1410)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->windingEvenOdd();
            						}
            						break;
            						case (int)22: {
HXLINE(1413)							{
HXLINE(1413)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->oPos = (data1->oPos + 2);
HXDLIN(1413)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1413)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->iPos = (data1->iPos + 1);
HXDLIN(1413)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1413)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->oPos = (data1->oPos + 4);
HXDLIN(1413)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1413)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1413)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1413)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1413)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1413)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->fPos = (data1->fPos + 5);
HXDLIN(1413)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1413)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->oPos = (data1->oPos + 2);
HXDLIN(1413)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1413)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->oPos = (data1->oPos + 4);
HXDLIN(1413)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1413)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1413)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1413)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1413)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1413)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->oPos = (data1->oPos + 4);
HXDLIN(1413)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1413)										data2->iPos = (data2->iPos + 1);
HXDLIN(1413)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1413)										data3->fPos = (data3->fPos + 2);
HXDLIN(1413)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1413)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE(1413)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1413)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE(1413)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn();
HXDLIN(1413)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE(1414)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->windingNonZero();
            						}
            						break;
            						default:{
HXLINE(1417)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->oPos = (data1->oPos + 2);
HXDLIN(1417)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1417)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->iPos = (data1->iPos + 1);
HXDLIN(1417)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1417)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->oPos = (data1->oPos + 4);
HXDLIN(1417)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1417)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1417)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1417)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1417)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1417)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->fPos = (data1->fPos + 5);
HXDLIN(1417)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1417)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->oPos = (data1->oPos + 2);
HXDLIN(1417)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1417)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->oPos = (data1->oPos + 4);
HXDLIN(1417)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1417)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1417)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1417)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1417)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1417)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->oPos = (data1->oPos + 4);
HXDLIN(1417)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1417)									data2->iPos = (data2->iPos + 1);
HXDLIN(1417)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1417)									data3->fPos = (data3->fPos + 2);
HXDLIN(1417)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1417)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1417)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1417)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1417)							data->prev = type;
            						}
            					}
            				}
            			}
HXLINE(1421)			if ((::openfl::display::_internal::CairoGraphics_obj::fillCommands->get_length() > 0)) {
HXLINE(1423)				::openfl::display::_internal::CairoGraphics_obj::endFill();
            			}
HXLINE(1426)			if ((::openfl::display::_internal::CairoGraphics_obj::strokeCommands->get_length() > 0)) {
HXLINE(1428)				::openfl::display::_internal::CairoGraphics_obj::endStroke();
            			}
HXLINE(1431)			data->destroy();
HXLINE(1433)			graphics->_hx___bitmap->image->dirty = true;
HXLINE(1434)			graphics->_hx___bitmap->image->version++;
            		}
HXLINE(1437)		graphics->_hx___softwareDirty = false;
HXLINE(1438)		graphics->set___dirty(false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,render,(void))

void CairoGraphics_obj::renderMask( ::openfl::display::Graphics graphics, ::openfl::display::CairoRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_1445_renderMask)
HXDLIN(1445)		if ((graphics->_hx___commands->get_length() != 0)) {
HXLINE(1447)			::openfl::display::_internal::CairoGraphics_obj::cairo = renderer->cairo;
HXLINE(1449)			Float positionX = ((Float)0.0);
HXLINE(1450)			Float positionY = ((Float)0.0);
HXLINE(1452)			int offsetX = 0;
HXLINE(1453)			int offsetY = 0;
HXLINE(1455)			 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE(1457)			Float x;
HXDLIN(1457)			Float y;
HXDLIN(1457)			Float width;
HXDLIN(1457)			Float height;
HXDLIN(1457)			Float kappa = ((Float).5522848);
HXDLIN(1457)			Float ox;
HXDLIN(1457)			Float oy;
HXDLIN(1457)			Float xe;
HXDLIN(1457)			Float ye;
HXDLIN(1457)			Float xm;
HXDLIN(1457)			Float ym;
HXLINE(1459)			{
HXLINE(1459)				int _g = 0;
HXDLIN(1459)				::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN(1459)				while((_g < _g1->length)){
HXLINE(1459)					 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN(1459)					_g = (_g + 1);
HXLINE(1461)					switch((int)(type->_hx_getIndex())){
            						case (int)4: {
HXLINE(1464)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->oPos = (data1->oPos + 2);
HXDLIN(1464)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1464)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->iPos = (data1->iPos + 1);
HXDLIN(1464)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1464)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->oPos = (data1->oPos + 4);
HXDLIN(1464)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1464)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1464)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1464)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1464)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1464)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->fPos = (data1->fPos + 5);
HXDLIN(1464)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1464)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->oPos = (data1->oPos + 2);
HXDLIN(1464)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1464)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->oPos = (data1->oPos + 4);
HXDLIN(1464)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1464)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1464)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1464)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1464)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1464)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->oPos = (data1->oPos + 4);
HXDLIN(1464)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1464)									data2->iPos = (data2->iPos + 1);
HXDLIN(1464)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1464)									data3->fPos = (data3->fPos + 2);
HXDLIN(1464)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1464)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1464)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1464)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1464)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN(1464)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1464)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1465)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),(c->buffer->f->__get((c->fPos + 2)) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 3)) - ( (Float)(offsetY) )),(c->buffer->f->__get((c->fPos + 4)) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 5)) - ( (Float)(offsetY) )));
HXLINE(1473)							positionX = c->buffer->f->__get((c->fPos + 4));
HXLINE(1474)							positionY = c->buffer->f->__get((c->fPos + 5));
            						}
            						break;
            						case (int)5: {
HXLINE(1477)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 2);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1477)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->iPos = (data1->iPos + 1);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1477)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 4);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1477)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1477)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1477)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->fPos = (data1->fPos + 5);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1477)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 2);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1477)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 4);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1477)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1477)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1477)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 4);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1477)									data2->iPos = (data2->iPos + 1);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1477)									data3->fPos = (data3->fPos + 2);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1477)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1477)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN(1477)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1477)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1478)							::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),(c->buffer->f->__get((c->fPos + 2)) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 3)) - ( (Float)(offsetY) )));
HXLINE(1479)							positionX = c->buffer->f->__get((c->fPos + 2));
HXLINE(1480)							positionY = c->buffer->f->__get((c->fPos + 3));
            						}
            						break;
            						case (int)6: {
HXLINE(1483)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->oPos = (data1->oPos + 2);
HXDLIN(1483)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1483)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->iPos = (data1->iPos + 1);
HXDLIN(1483)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1483)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->oPos = (data1->oPos + 4);
HXDLIN(1483)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1483)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1483)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1483)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1483)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1483)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->fPos = (data1->fPos + 5);
HXDLIN(1483)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1483)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->oPos = (data1->oPos + 2);
HXDLIN(1483)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1483)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->oPos = (data1->oPos + 4);
HXDLIN(1483)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1483)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1483)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1483)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1483)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1483)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->oPos = (data1->oPos + 4);
HXDLIN(1483)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1483)									data2->iPos = (data2->iPos + 1);
HXDLIN(1483)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1483)									data3->fPos = (data3->fPos + 2);
HXDLIN(1483)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1483)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1483)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1483)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1483)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN(1483)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1483)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1484)							::openfl::display::_internal::CairoGraphics_obj::cairo->arc((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),c->buffer->f->__get((c->fPos + 2)),( (Float)(0) ),(::Math_obj::PI * ( (Float)(2) )));
            						}
            						break;
            						case (int)7: {
HXLINE(1487)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->oPos = (data1->oPos + 2);
HXDLIN(1487)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1487)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->iPos = (data1->iPos + 1);
HXDLIN(1487)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1487)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->oPos = (data1->oPos + 4);
HXDLIN(1487)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1487)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1487)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1487)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1487)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1487)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->fPos = (data1->fPos + 5);
HXDLIN(1487)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1487)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->oPos = (data1->oPos + 2);
HXDLIN(1487)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1487)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->oPos = (data1->oPos + 4);
HXDLIN(1487)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1487)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1487)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1487)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1487)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1487)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->oPos = (data1->oPos + 4);
HXDLIN(1487)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1487)									data2->iPos = (data2->iPos + 1);
HXDLIN(1487)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1487)									data3->fPos = (data3->fPos + 2);
HXDLIN(1487)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1487)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1487)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1487)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1487)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN(1487)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1487)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1489)							x = c->buffer->f->__get(c->fPos);
HXLINE(1490)							y = c->buffer->f->__get((c->fPos + 1));
HXLINE(1491)							width = c->buffer->f->__get((c->fPos + 2));
HXLINE(1492)							height = c->buffer->f->__get((c->fPos + 3));
HXLINE(1494)							x = (x - ( (Float)(offsetX) ));
HXLINE(1495)							y = (y - ( (Float)(offsetY) ));
HXLINE(1497)							ox = ((width / ( (Float)(2) )) * kappa);
HXLINE(1498)							oy = ((height / ( (Float)(2) )) * kappa);
HXLINE(1499)							xe = (x + width);
HXLINE(1500)							ye = (y + height);
HXLINE(1501)							xm = (x + (width / ( (Float)(2) )));
HXLINE(1502)							ym = (y + (height / ( (Float)(2) )));
HXLINE(1506)							::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(x,ym);
HXLINE(1507)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(x,(ym - oy),(xm - ox),y,xm,y);
HXLINE(1508)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((xm + ox),y,xe,(ym - oy),xe,ym);
HXLINE(1509)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(xe,(ym + oy),(xm + ox),ye,xm,ye);
HXLINE(1510)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((xm - ox),ye,x,(ym + oy),x,ym);
            						}
            						break;
            						case (int)9: {
HXLINE(1514)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->oPos = (data1->oPos + 2);
HXDLIN(1514)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1514)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->iPos = (data1->iPos + 1);
HXDLIN(1514)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1514)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->oPos = (data1->oPos + 4);
HXDLIN(1514)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1514)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1514)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1514)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1514)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1514)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->fPos = (data1->fPos + 5);
HXDLIN(1514)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1514)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->oPos = (data1->oPos + 2);
HXDLIN(1514)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1514)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->oPos = (data1->oPos + 4);
HXDLIN(1514)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1514)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1514)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1514)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1514)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1514)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->oPos = (data1->oPos + 4);
HXDLIN(1514)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1514)									data2->iPos = (data2->iPos + 1);
HXDLIN(1514)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1514)									data3->fPos = (data3->fPos + 2);
HXDLIN(1514)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1514)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1514)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1514)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1514)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN(1514)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1514)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1515)							::openfl::display::_internal::CairoGraphics_obj::cairo->rectangle((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            						}
            						break;
            						case (int)10: {
HXLINE(1518)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->oPos = (data1->oPos + 2);
HXDLIN(1518)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1518)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->iPos = (data1->iPos + 1);
HXDLIN(1518)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1518)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->oPos = (data1->oPos + 4);
HXDLIN(1518)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1518)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1518)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1518)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1518)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1518)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->fPos = (data1->fPos + 5);
HXDLIN(1518)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1518)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->oPos = (data1->oPos + 2);
HXDLIN(1518)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1518)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->oPos = (data1->oPos + 4);
HXDLIN(1518)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1518)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1518)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1518)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1518)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1518)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->oPos = (data1->oPos + 4);
HXDLIN(1518)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1518)									data2->iPos = (data2->iPos + 1);
HXDLIN(1518)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1518)									data3->fPos = (data3->fPos + 2);
HXDLIN(1518)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1518)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1518)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1518)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1518)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN(1518)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1518)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1519)							::openfl::display::_internal::CairoGraphics_obj::drawRoundRect((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            						}
            						break;
            						case (int)17: {
HXLINE(1522)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->oPos = (data1->oPos + 2);
HXDLIN(1522)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1522)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->iPos = (data1->iPos + 1);
HXDLIN(1522)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1522)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->oPos = (data1->oPos + 4);
HXDLIN(1522)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1522)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1522)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1522)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1522)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1522)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->fPos = (data1->fPos + 5);
HXDLIN(1522)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1522)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->oPos = (data1->oPos + 2);
HXDLIN(1522)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1522)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->oPos = (data1->oPos + 4);
HXDLIN(1522)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1522)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1522)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1522)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1522)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1522)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->oPos = (data1->oPos + 4);
HXDLIN(1522)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1522)									data2->iPos = (data2->iPos + 1);
HXDLIN(1522)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1522)									data3->fPos = (data3->fPos + 2);
HXDLIN(1522)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1522)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1522)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1522)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1522)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN(1522)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1522)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1523)							::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )));
HXLINE(1524)							positionX = c->buffer->f->__get(c->fPos);
HXLINE(1525)							positionY = c->buffer->f->__get((c->fPos + 1));
            						}
            						break;
            						case (int)18: {
HXLINE(1528)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->oPos = (data1->oPos + 2);
HXDLIN(1528)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1528)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->iPos = (data1->iPos + 1);
HXDLIN(1528)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1528)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->oPos = (data1->oPos + 4);
HXDLIN(1528)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1528)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1528)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1528)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1528)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1528)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->fPos = (data1->fPos + 5);
HXDLIN(1528)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1528)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->oPos = (data1->oPos + 2);
HXDLIN(1528)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1528)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->oPos = (data1->oPos + 4);
HXDLIN(1528)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1528)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1528)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1528)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1528)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1528)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->oPos = (data1->oPos + 4);
HXDLIN(1528)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1528)									data2->iPos = (data2->iPos + 1);
HXDLIN(1528)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1528)									data3->fPos = (data3->fPos + 2);
HXDLIN(1528)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1528)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1528)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1528)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1528)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN(1528)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1528)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1529)							::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )));
HXLINE(1530)							positionX = c->buffer->f->__get(c->fPos);
HXLINE(1531)							positionY = c->buffer->f->__get((c->fPos + 1));
            						}
            						break;
            						default:{
HXLINE(1534)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 2);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1534)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->iPos = (data1->iPos + 1);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1534)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 4);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1534)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1534)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1534)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->fPos = (data1->fPos + 5);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1534)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 2);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1534)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 4);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1534)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1534)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1534)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 4);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1534)									data2->iPos = (data2->iPos + 1);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1534)									data3->fPos = (data3->fPos + 2);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1534)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1534)							data->prev = type;
            						}
            					}
            				}
            			}
HXLINE(1538)			data->destroy();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,renderMask,(void))


CairoGraphics_obj::CairoGraphics_obj()
{
}

bool CairoGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { outValue = ( SIN45 ); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { outValue = ( TAN22 ); return true; }
		if (HX_FIELD_EQ(inName,"cairo") ) { outValue = ( cairo ); return true; }
		if (HX_FIELD_EQ(inName,"isCCW") ) { outValue = isCCW_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { outValue = ( bounds ); return true; }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { outValue = ( hasFill ); return true; }
		if (HX_FIELD_EQ(inName,"endFill") ) { outValue = endFill_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hitTest") ) { outValue = hitTest_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { outValue = ( graphics ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { outValue = ( hasStroke ); return true; }
		if (HX_FIELD_EQ(inName,"closePath") ) { outValue = closePath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"endStroke") ) { outValue = endStroke_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { outValue = ( bitmapFill ); return true; }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { outValue = ( hitTesting ); return true; }
		if (HX_FIELD_EQ(inName,"worldAlpha") ) { outValue = ( worldAlpha ); return true; }
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { outValue = ( fillPattern ); return true; }
		if (HX_FIELD_EQ(inName,"tempMatrix3") ) { outValue = ( tempMatrix3 ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { outValue = ( bitmapRepeat ); return true; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { outValue = ( fillCommands ); return true; }
		if (HX_FIELD_EQ(inName,"normalizeUVT") ) { outValue = normalizeUVT_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"playCommands") ) { outValue = playCommands_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { outValue = ( pendingMatrix ); return true; }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { outValue = ( strokePattern ); return true; }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { outValue = drawRoundRect_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { outValue = ( allowSmoothing ); return true; }
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { outValue = ( strokeCommands ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"quadraticCurveTo") ) { outValue = quadraticCurveTo_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { outValue = ( fillPatternMatrix ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createImagePattern") ) { outValue = createImagePattern_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { outValue = ( inversePendingMatrix ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createGradientPattern") ) { outValue = createGradientPattern_dyn(); return true; }
	}
	return false;
}

bool CairoGraphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=ioValue.Cast<  ::lime::graphics::cairo::Cairo >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { hasFill=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=ioValue.Cast<  ::openfl::display::Graphics >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { hasStroke=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { bitmapFill=ioValue.Cast<  ::openfl::display::BitmapData >(); return true; }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { hitTesting=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"worldAlpha") ) { worldAlpha=ioValue.Cast< Float >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { fillPattern=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"tempMatrix3") ) { tempMatrix3=ioValue.Cast<  ::lime::math::Matrix3 >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { bitmapRepeat=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { fillCommands=ioValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { pendingMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { strokePattern=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { allowSmoothing=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { strokeCommands=ioValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { fillPatternMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { inversePendingMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoGraphics_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CairoGraphics_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &CairoGraphics_obj::SIN45,HX_("SIN45",79,16,be,fa)},
	{::hx::fsFloat,(void *) &CairoGraphics_obj::TAN22,HX_("TAN22",41,f4,da,88)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::allowSmoothing,HX_("allowSmoothing",ab,b7,66,68)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(void *) &CairoGraphics_obj::bitmapFill,HX_("bitmapFill",12,2e,19,35)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::bitmapRepeat,HX_("bitmapRepeat",aa,38,9c,11)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(void *) &CairoGraphics_obj::bounds,HX_("bounds",75,86,1d,66)},
	{::hx::fsObject /*  ::lime::graphics::cairo::Cairo */ ,(void *) &CairoGraphics_obj::cairo,HX_("cairo",88,30,19,41)},
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(void *) &CairoGraphics_obj::fillCommands,HX_("fillCommands",6b,f6,c9,c2)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CairoGraphics_obj::fillPattern,HX_("fillPattern",0d,86,12,35)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &CairoGraphics_obj::fillPatternMatrix,HX_("fillPatternMatrix",2e,b8,ae,97)},
	{::hx::fsObject /*  ::openfl::display::Graphics */ ,(void *) &CairoGraphics_obj::graphics,HX_("graphics",cb,f8,67,12)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::hasFill,HX_("hasFill",fd,ee,ff,12)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::hasStroke,HX_("hasStroke",b2,66,1d,52)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::hitTesting,HX_("hitTesting",bd,65,48,19)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &CairoGraphics_obj::inversePendingMatrix,HX_("inversePendingMatrix",28,14,8c,bb)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &CairoGraphics_obj::pendingMatrix,HX_("pendingMatrix",f8,9d,96,b5)},
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(void *) &CairoGraphics_obj::strokeCommands,HX_("strokeCommands",a0,98,2a,67)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CairoGraphics_obj::strokePattern,HX_("strokePattern",78,e1,21,7e)},
	{::hx::fsObject /*  ::lime::math::Matrix3 */ ,(void *) &CairoGraphics_obj::tempMatrix3,HX_("tempMatrix3",1e,f2,bd,79)},
	{::hx::fsFloat,(void *) &CairoGraphics_obj::worldAlpha,HX_("worldAlpha",ac,57,43,8d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CairoGraphics_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::allowSmoothing,"allowSmoothing");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hitTesting,"hitTesting");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::tempMatrix3,"tempMatrix3");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::worldAlpha,"worldAlpha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoGraphics_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::allowSmoothing,"allowSmoothing");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hitTesting,"hitTesting");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::tempMatrix3,"tempMatrix3");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::worldAlpha,"worldAlpha");
};

#endif

::hx::Class CairoGraphics_obj::__mClass;

static ::String CairoGraphics_obj_sStaticFields[] = {
	HX_("SIN45",79,16,be,fa),
	HX_("TAN22",41,f4,da,88),
	HX_("allowSmoothing",ab,b7,66,68),
	HX_("bitmapFill",12,2e,19,35),
	HX_("bitmapRepeat",aa,38,9c,11),
	HX_("bounds",75,86,1d,66),
	HX_("cairo",88,30,19,41),
	HX_("fillCommands",6b,f6,c9,c2),
	HX_("fillPattern",0d,86,12,35),
	HX_("fillPatternMatrix",2e,b8,ae,97),
	HX_("graphics",cb,f8,67,12),
	HX_("hasFill",fd,ee,ff,12),
	HX_("hasStroke",b2,66,1d,52),
	HX_("hitTesting",bd,65,48,19),
	HX_("inversePendingMatrix",28,14,8c,bb),
	HX_("pendingMatrix",f8,9d,96,b5),
	HX_("strokeCommands",a0,98,2a,67),
	HX_("strokePattern",78,e1,21,7e),
	HX_("tempMatrix3",1e,f2,bd,79),
	HX_("worldAlpha",ac,57,43,8d),
	HX_("closePath",7d,65,20,14),
	HX_("createGradientPattern",a4,ee,44,f6),
	HX_("createImagePattern",51,bd,5d,fb),
	HX_("drawRoundRect",ee,c3,aa,e2),
	HX_("endFill",fe,87,e0,25),
	HX_("endStroke",f3,01,17,51),
	HX_("hitTest",45,60,7f,e2),
	HX_("isCCW",0d,84,49,c1),
	HX_("normalizeUVT",66,09,2f,47),
	HX_("playCommands",dc,ae,ee,49),
	HX_("quadraticCurveTo",12,48,c3,82),
	HX_("render",56,6b,29,05),
	HX_("renderMask",62,3b,60,e5),
	::String(null())
};

void CairoGraphics_obj::__register()
{
	CairoGraphics_obj _hx_dummy;
	CairoGraphics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CairoGraphics",f7,a0,7f,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &CairoGraphics_obj::__SetStatic;
	__mClass->mMarkFunc = CairoGraphics_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoGraphics_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoGraphics_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoGraphics_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoGraphics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoGraphics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoGraphics_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_36_boot)
HXDLIN(  36)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_39_boot)
HXDLIN(  39)		SIN45 = ((Float)0.70710678118654752440084436210485);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_40_boot)
HXDLIN(  40)		TAN22 = ((Float)0.4142135623730950488016887242097);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_46_boot)
HXDLIN(  46)		fillCommands =  ::openfl::display::_internal::DrawCommandBuffer_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_55_boot)
HXDLIN(  55)		strokeCommands =  ::openfl::display::_internal::DrawCommandBuffer_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_57_boot)
HXDLIN(  57)		tempMatrix3 =  ::lime::math::Matrix3_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
