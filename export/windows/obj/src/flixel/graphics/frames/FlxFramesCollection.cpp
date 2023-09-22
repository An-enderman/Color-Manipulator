#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_54_new,"flixel.graphics.frames.FlxFramesCollection","new",0x41834b71,"flixel.graphics.frames.FlxFramesCollection.new","flixel/graphics/frames/FlxFramesCollection.hx",54,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_73_getByName,"flixel.graphics.frames.FlxFramesCollection","getByName",0xec0f52c9,"flixel.graphics.frames.FlxFramesCollection.getByName","flixel/graphics/frames/FlxFramesCollection.hx",73,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_84_getByIndex,"flixel.graphics.frames.FlxFramesCollection","getByIndex",0xc8e928d4,"flixel.graphics.frames.FlxFramesCollection.getByIndex","flixel/graphics/frames/FlxFramesCollection.hx",84,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_94_getIndexByName,"flixel.graphics.frames.FlxFramesCollection","getIndexByName",0x9190d40d,"flixel.graphics.frames.FlxFramesCollection.getIndexByName","flixel/graphics/frames/FlxFramesCollection.hx",94,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_112_getFrameIndex,"flixel.graphics.frames.FlxFramesCollection","getFrameIndex",0x9be9862c,"flixel.graphics.frames.FlxFramesCollection.getFrameIndex","flixel/graphics/frames/FlxFramesCollection.hx",112,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_116_destroy,"flixel.graphics.frames.FlxFramesCollection","destroy",0x3c5f048b,"flixel.graphics.frames.FlxFramesCollection.destroy","flixel/graphics/frames/FlxFramesCollection.hx",116,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_132_addEmptyFrame,"flixel.graphics.frames.FlxFramesCollection","addEmptyFrame",0x8f5bf232,"flixel.graphics.frames.FlxFramesCollection.addEmptyFrame","flixel/graphics/frames/FlxFramesCollection.hx",132,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_148_addSpriteSheetFrame,"flixel.graphics.frames.FlxFramesCollection","addSpriteSheetFrame",0x98036ac5,"flixel.graphics.frames.FlxFramesCollection.addSpriteSheetFrame","flixel/graphics/frames/FlxFramesCollection.hx",148,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_173_addAtlasFrame,"flixel.graphics.frames.FlxFramesCollection","addAtlasFrame",0xf1c62eb4,"flixel.graphics.frames.FlxFramesCollection.addAtlasFrame","flixel/graphics/frames/FlxFramesCollection.hx",173,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_202_setFrameOffset,"flixel.graphics.frames.FlxFramesCollection","setFrameOffset",0xbcd84bad,"flixel.graphics.frames.FlxFramesCollection.setFrameOffset","flixel/graphics/frames/FlxFramesCollection.hx",202,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_221_addFrameOffset,"flixel.graphics.frames.FlxFramesCollection","addFrameOffset",0xaaf1178e,"flixel.graphics.frames.FlxFramesCollection.addFrameOffset","flixel/graphics/frames/FlxFramesCollection.hx",221,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_239_setFramesOffsetByPrefix,"flixel.graphics.frames.FlxFramesCollection","setFramesOffsetByPrefix",0x71d30615,"flixel.graphics.frames.FlxFramesCollection.setFramesOffsetByPrefix","flixel/graphics/frames/FlxFramesCollection.hx",239,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_258_addFramesOffsetByPrefix,"flixel.graphics.frames.FlxFramesCollection","addFramesOffsetByPrefix",0x0f3c3614,"flixel.graphics.frames.FlxFramesCollection.addFramesOffsetByPrefix","flixel/graphics/frames/FlxFramesCollection.hx",258,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_277_setFrameDuration,"flixel.graphics.frames.FlxFramesCollection","setFrameDuration",0x4fcf7dee,"flixel.graphics.frames.FlxFramesCollection.setFrameDuration","flixel/graphics/frames/FlxFramesCollection.hx",277,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_295_setFramesDurationByPrefix,"flixel.graphics.frames.FlxFramesCollection","setFramesDurationByPrefix",0xc5c6bf16,"flixel.graphics.frames.FlxFramesCollection.setFramesDurationByPrefix","flixel/graphics/frames/FlxFramesCollection.hx",295,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_310_checkFrame,"flixel.graphics.frames.FlxFramesCollection","checkFrame",0xf252f354,"flixel.graphics.frames.FlxFramesCollection.checkFrame","flixel/graphics/frames/FlxFramesCollection.hx",310,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_332_pushFrame,"flixel.graphics.frames.FlxFramesCollection","pushFrame",0xac097dc4,"flixel.graphics.frames.FlxFramesCollection.pushFrame","flixel/graphics/frames/FlxFramesCollection.hx",332,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_354_addBorder,"flixel.graphics.frames.FlxFramesCollection","addBorder",0x7da91fbe,"flixel.graphics.frames.FlxFramesCollection.addBorder","flixel/graphics/frames/FlxFramesCollection.hx",354,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_360_toString,"flixel.graphics.frames.FlxFramesCollection","toString",0xfe5297fb,"flixel.graphics.frames.FlxFramesCollection.toString","flixel/graphics/frames/FlxFramesCollection.hx",360,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_365_get_numFrames,"flixel.graphics.frames.FlxFramesCollection","get_numFrames",0xbd2728b4,"flixel.graphics.frames.FlxFramesCollection.get_numFrames","flixel/graphics/frames/FlxFramesCollection.hx",365,0xe09dd200)
namespace flixel{
namespace graphics{
namespace frames{

void FlxFramesCollection_obj::__construct( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxBasePoint border){
            	HX_GC_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_54_new)
HXLINE(  55)		this->parent = parent;
HXLINE(  56)		this->type = type;
HXLINE(  57)		 ::flixel::math::FlxBasePoint _hx_tmp;
HXDLIN(  57)		if (::hx::IsNull( border )) {
HXLINE(  57)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  57)			point->_inPool = false;
HXDLIN(  57)			_hx_tmp = point;
            		}
            		else {
HXLINE(  57)			_hx_tmp = border;
            		}
HXDLIN(  57)		this->border = _hx_tmp;
HXLINE(  58)		this->frames = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  59)		this->framesHash =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  61)		if (::hx::IsNotNull( parent )) {
HXLINE(  62)			parent->addFrameCollection(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}

Dynamic FlxFramesCollection_obj::__CreateEmpty() { return new FlxFramesCollection_obj; }

void *FlxFramesCollection_obj::_hx_vtable = 0;

Dynamic FlxFramesCollection_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxFramesCollection_obj > _hx_result = new FlxFramesCollection_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxFramesCollection_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7907b929;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_graphics_frames_FlxFramesCollection__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::graphics::frames::FlxFramesCollection_obj::destroy,
};

void *FlxFramesCollection_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_graphics_frames_FlxFramesCollection__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::getByName(::String name){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_73_getByName)
HXDLIN(  73)		return ( ( ::flixel::graphics::frames::FlxFrame)(this->framesHash->get(name)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getByName,return )

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::getByIndex(int index){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_84_getByIndex)
HXDLIN(  84)		return this->frames->__get(index).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getByIndex,return )

int FlxFramesCollection_obj::getIndexByName(::String name){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_94_getIndexByName)
HXLINE(  95)		{
HXLINE(  95)			int _g = 0;
HXDLIN(  95)			int _g1 = this->frames->length;
HXDLIN(  95)			while((_g < _g1)){
HXLINE(  95)				_g = (_g + 1);
HXDLIN(  95)				int i = (_g - 1);
HXLINE(  97)				if ((this->frames->__get(i).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->name == name)) {
HXLINE(  98)					return i;
            				}
            			}
            		}
HXLINE( 101)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getIndexByName,return )

int FlxFramesCollection_obj::getFrameIndex( ::flixel::graphics::frames::FlxFrame frame){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_112_getFrameIndex)
HXDLIN( 112)		return this->frames->indexOf(frame,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getFrameIndex,return )

void FlxFramesCollection_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_116_destroy)
HXLINE( 117)		this->frames = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->frames);
HXLINE( 118)		this->border = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->border)) );
HXLINE( 119)		this->framesHash = null();
HXLINE( 120)		this->parent = null();
HXLINE( 121)		this->type = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,destroy,(void))

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addEmptyFrame( ::flixel::math::FlxRect size){
            	HX_GC_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_132_addEmptyFrame)
HXLINE( 133)		 ::flixel::graphics::frames::FlxFrame frame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,null(),null(),null(),null());
HXLINE( 134)		frame->type = 2;
HXLINE( 135)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 135)		_this->x = ( (Float)(0) );
HXDLIN( 135)		_this->y = ( (Float)(0) );
HXDLIN( 135)		_this->width = ( (Float)(0) );
HXDLIN( 135)		_this->height = ( (Float)(0) );
HXDLIN( 135)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 135)		rect->_inPool = false;
HXDLIN( 135)		frame->set_frame(rect);
HXLINE( 136)		{
HXLINE( 136)			 ::flixel::math::FlxBasePoint this1 = frame->sourceSize;
HXDLIN( 136)			Float y = size->height;
HXDLIN( 136)			this1->set_x(size->width);
HXDLIN( 136)			this1->set_y(y);
            		}
HXLINE( 137)		this->frames->push(frame);
HXLINE( 138)		return frame;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addEmptyFrame,return )

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addSpriteSheetFrame( ::flixel::math::FlxRect region){
            	HX_GC_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_148_addSpriteSheetFrame)
HXLINE( 149)		 ::flixel::graphics::frames::FlxFrame frame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,null(),null(),null(),null());
HXLINE( 150)		frame->set_frame(this->checkFrame(region,null()));
HXLINE( 151)		{
HXLINE( 151)			 ::flixel::math::FlxBasePoint this1 = frame->sourceSize;
HXDLIN( 151)			Float y = region->height;
HXDLIN( 151)			this1->set_x(region->width);
HXDLIN( 151)			this1->set_y(y);
            		}
HXLINE( 152)		{
HXLINE( 152)			 ::flixel::math::FlxBasePoint this2 = frame->offset;
HXDLIN( 152)			this2->set_x(( (Float)(0) ));
HXDLIN( 152)			this2->set_y(( (Float)(0) ));
            		}
HXLINE( 153)		return this->pushFrame(frame);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addSpriteSheetFrame,return )

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addAtlasFrame( ::flixel::math::FlxRect frame, ::flixel::math::FlxBasePoint sourceSize, ::flixel::math::FlxBasePoint offset,::String name,::hx::Null< int >  __o_angle,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY,::hx::Null< Float >  __o_duration){
            		int angle = __o_angle.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            		Float duration = __o_duration.Default(((Float)0.0));
            	HX_GC_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_173_addAtlasFrame)
HXLINE( 174)		bool _hx_tmp;
HXDLIN( 174)		if (::hx::IsNotNull( name )) {
HXLINE( 174)			_hx_tmp = this->framesHash->exists(name);
            		}
            		else {
HXLINE( 174)			_hx_tmp = false;
            		}
HXDLIN( 174)		if (_hx_tmp) {
HXLINE( 175)			return ( ( ::flixel::graphics::frames::FlxFrame)(this->framesHash->get(name)) );
            		}
HXLINE( 177)		 ::flixel::graphics::frames::FlxFrame texFrame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,angle,flipX,flipY,duration);
HXLINE( 178)		texFrame->name = name;
HXLINE( 179)		{
HXLINE( 179)			 ::flixel::math::FlxBasePoint this1 = texFrame->sourceSize;
HXDLIN( 179)			Float y = sourceSize->y;
HXDLIN( 179)			this1->set_x(sourceSize->x);
HXDLIN( 179)			this1->set_y(y);
            		}
HXLINE( 180)		{
HXLINE( 180)			 ::flixel::math::FlxBasePoint this2 = texFrame->offset;
HXDLIN( 180)			Float y1 = offset->y;
HXDLIN( 180)			this2->set_x(offset->x);
HXDLIN( 180)			this2->set_y(y1);
            		}
HXLINE( 181)		texFrame->set_frame(this->checkFrame(frame,name));
HXLINE( 183)		sourceSize = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(sourceSize)) );
HXLINE( 184)		offset = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(offset)) );
HXLINE( 186)		return this->pushFrame(texFrame);
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxFramesCollection_obj,addAtlasFrame,return )

void FlxFramesCollection_obj::setFrameOffset(::String name,Float offsetX,Float offsetY){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_202_setFrameOffset)
HXDLIN( 202)		if (this->framesHash->exists(name)) {
HXLINE( 203)			 ::flixel::math::FlxBasePoint this1 = ( ( ::flixel::graphics::frames::FlxFrame)(this->framesHash->get(name)) )->offset;
HXDLIN( 203)			this1->set_x(offsetX);
HXDLIN( 203)			this1->set_y(offsetY);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxFramesCollection_obj,setFrameOffset,(void))

void FlxFramesCollection_obj::addFrameOffset(::String name,Float offsetX,Float offsetY){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_221_addFrameOffset)
HXDLIN( 221)		if (this->framesHash->exists(name)) {
HXLINE( 222)			 ::flixel::math::FlxBasePoint this1 = ( ( ::flixel::graphics::frames::FlxFrame)(this->framesHash->get(name)) )->offset;
HXDLIN( 222)			this1->set_x((this1->x + offsetX));
HXDLIN( 222)			this1->set_y((this1->y + offsetY));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxFramesCollection_obj,addFrameOffset,(void))

void FlxFramesCollection_obj::setFramesOffsetByPrefix(::String prefix,Float offsetX,Float offsetY){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_239_setFramesOffsetByPrefix)
HXDLIN( 239)		::Dynamic map = this->framesHash;
HXDLIN( 239)		::Dynamic _g_map = map;
HXDLIN( 239)		 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 239)		while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 239)			::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 239)			 ::flixel::graphics::frames::FlxFrame _g1_value = ( ( ::flixel::graphics::frames::FlxFrame)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 239)			::String _g1_key = key;
HXDLIN( 239)			::String name = _g1_key;
HXDLIN( 239)			 ::flixel::graphics::frames::FlxFrame frame = _g1_value;
HXLINE( 241)			if ((name.indexOf(prefix,null()) == 0)) {
HXLINE( 242)				 ::flixel::math::FlxBasePoint this1 = frame->offset;
HXDLIN( 242)				this1->set_x(offsetX);
HXDLIN( 242)				this1->set_y(offsetY);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxFramesCollection_obj,setFramesOffsetByPrefix,(void))

void FlxFramesCollection_obj::addFramesOffsetByPrefix(::String prefix,Float offsetX,Float offsetY){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_258_addFramesOffsetByPrefix)
HXDLIN( 258)		::Dynamic map = this->framesHash;
HXDLIN( 258)		::Dynamic _g_map = map;
HXDLIN( 258)		 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 258)		while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 258)			::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 258)			 ::flixel::graphics::frames::FlxFrame _g1_value = ( ( ::flixel::graphics::frames::FlxFrame)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 258)			::String _g1_key = key;
HXDLIN( 258)			::String name = _g1_key;
HXDLIN( 258)			 ::flixel::graphics::frames::FlxFrame frame = _g1_value;
HXLINE( 260)			if ((name.indexOf(prefix,null()) == 0)) {
HXLINE( 261)				 ::flixel::math::FlxBasePoint this1 = frame->offset;
HXDLIN( 261)				this1->set_x((this1->x + offsetX));
HXDLIN( 261)				this1->set_y((this1->y + offsetY));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxFramesCollection_obj,addFramesOffsetByPrefix,(void))

void FlxFramesCollection_obj::setFrameDuration(::String name,Float duration){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_277_setFrameDuration)
HXDLIN( 277)		if (this->framesHash->exists(name)) {
HXLINE( 278)			( ( ::flixel::graphics::frames::FlxFrame)(this->framesHash->get(name)) )->duration = duration;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFramesCollection_obj,setFrameDuration,(void))

void FlxFramesCollection_obj::setFramesDurationByPrefix(::String prefix,Float duration){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_295_setFramesDurationByPrefix)
HXDLIN( 295)		::Dynamic map = this->framesHash;
HXDLIN( 295)		::Dynamic _g_map = map;
HXDLIN( 295)		 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 295)		while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 295)			::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 295)			 ::flixel::graphics::frames::FlxFrame _g1_value = ( ( ::flixel::graphics::frames::FlxFrame)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 295)			::String _g1_key = key;
HXDLIN( 295)			::String name = _g1_key;
HXDLIN( 295)			 ::flixel::graphics::frames::FlxFrame frame = _g1_value;
HXLINE( 297)			if ((name.indexOf(prefix,null()) == 0)) {
HXLINE( 298)				( ( ::flixel::graphics::frames::FlxFrame)(this->framesHash->get(name)) )->duration = duration;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFramesCollection_obj,setFramesDurationByPrefix,(void))

 ::flixel::math::FlxRect FlxFramesCollection_obj::checkFrame( ::flixel::math::FlxRect frame,::String name){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_310_checkFrame)
HXLINE( 311)		Float Value = frame->x;
HXDLIN( 311)		 ::Dynamic Max = this->parent->width;
HXDLIN( 311)		Float lowerBound;
HXDLIN( 311)		if ((Value < 0)) {
HXLINE( 311)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 311)			lowerBound = Value;
            		}
HXDLIN( 311)		Float x;
HXDLIN( 311)		bool x1;
HXDLIN( 311)		if (::hx::IsNotNull( Max )) {
HXLINE( 311)			x1 = ::hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXLINE( 311)			x1 = false;
            		}
HXDLIN( 311)		if (x1) {
HXLINE( 311)			x = ( (Float)(Max) );
            		}
            		else {
HXLINE( 311)			x = lowerBound;
            		}
HXLINE( 312)		Float Value1 = frame->y;
HXDLIN( 312)		 ::Dynamic Max1 = this->parent->height;
HXDLIN( 312)		Float lowerBound1;
HXDLIN( 312)		if ((Value1 < 0)) {
HXLINE( 312)			lowerBound1 = ( (Float)(0) );
            		}
            		else {
HXLINE( 312)			lowerBound1 = Value1;
            		}
HXDLIN( 312)		Float y;
HXDLIN( 312)		bool y1;
HXDLIN( 312)		if (::hx::IsNotNull( Max1 )) {
HXLINE( 312)			y1 = ::hx::IsGreater( lowerBound1,Max1 );
            		}
            		else {
HXLINE( 312)			y1 = false;
            		}
HXDLIN( 312)		if (y1) {
HXLINE( 312)			y = ( (Float)(Max1) );
            		}
            		else {
HXLINE( 312)			y = lowerBound1;
            		}
HXLINE( 314)		Float Value2 = (frame->x + frame->width);
HXDLIN( 314)		 ::Dynamic Max2 = this->parent->width;
HXDLIN( 314)		Float lowerBound2;
HXDLIN( 314)		if ((Value2 < 0)) {
HXLINE( 314)			lowerBound2 = ( (Float)(0) );
            		}
            		else {
HXLINE( 314)			lowerBound2 = Value2;
            		}
HXDLIN( 314)		Float r;
HXDLIN( 314)		bool r1;
HXDLIN( 314)		if (::hx::IsNotNull( Max2 )) {
HXLINE( 314)			r1 = ::hx::IsGreater( lowerBound2,Max2 );
            		}
            		else {
HXLINE( 314)			r1 = false;
            		}
HXDLIN( 314)		if (r1) {
HXLINE( 314)			r = ( (Float)(Max2) );
            		}
            		else {
HXLINE( 314)			r = lowerBound2;
            		}
HXLINE( 315)		Float Value3 = (frame->y + frame->height);
HXDLIN( 315)		 ::Dynamic Max3 = this->parent->height;
HXDLIN( 315)		Float lowerBound3;
HXDLIN( 315)		if ((Value3 < 0)) {
HXLINE( 315)			lowerBound3 = ( (Float)(0) );
            		}
            		else {
HXLINE( 315)			lowerBound3 = Value3;
            		}
HXDLIN( 315)		Float b;
HXDLIN( 315)		bool b1;
HXDLIN( 315)		if (::hx::IsNotNull( Max3 )) {
HXLINE( 315)			b1 = ::hx::IsGreater( lowerBound3,Max3 );
            		}
            		else {
HXLINE( 315)			b1 = false;
            		}
HXDLIN( 315)		if (b1) {
HXLINE( 315)			b = ( (Float)(Max3) );
            		}
            		else {
HXLINE( 315)			b = lowerBound3;
            		}
HXLINE( 317)		{
HXLINE( 317)			frame->x = x;
HXDLIN( 317)			frame->y = y;
HXDLIN( 317)			frame->width = (r - x);
HXDLIN( 317)			frame->height = (b - y);
            		}
HXLINE( 319)		bool _hx_tmp;
HXDLIN( 319)		if (!((frame->width <= 0))) {
HXLINE( 319)			_hx_tmp = (frame->height <= 0);
            		}
            		else {
HXLINE( 319)			_hx_tmp = true;
            		}
HXLINE( 322)		return frame;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFramesCollection_obj,checkFrame,return )

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::pushFrame( ::flixel::graphics::frames::FlxFrame frameObj){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_332_pushFrame)
HXLINE( 333)		::String name = frameObj->name;
HXLINE( 334)		bool _hx_tmp;
HXDLIN( 334)		if (::hx::IsNotNull( name )) {
HXLINE( 334)			_hx_tmp = this->framesHash->exists(name);
            		}
            		else {
HXLINE( 334)			_hx_tmp = false;
            		}
HXDLIN( 334)		if (_hx_tmp) {
HXLINE( 335)			return ( ( ::flixel::graphics::frames::FlxFrame)(this->framesHash->get(name)) );
            		}
HXLINE( 337)		this->frames->push(frameObj);
HXLINE( 338)		frameObj->cacheFrameMatrix();
HXLINE( 340)		if (::hx::IsNotNull( name )) {
HXLINE( 341)			this->framesHash->set(name,frameObj);
            		}
HXLINE( 343)		return frameObj;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,pushFrame,return )

 ::flixel::graphics::frames::FlxFramesCollection FlxFramesCollection_obj::addBorder( ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_354_addBorder)
HXDLIN( 354)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("To be overriden in subclasses",8b,78,89,60)));
HXDLIN( 354)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addBorder,return )

::String FlxFramesCollection_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_360_toString)
HXDLIN( 360)		 ::Dynamic value = this->frames;
HXDLIN( 360)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 360)		_this->label = HX_("frames",a6,af,85,ac);
HXDLIN( 360)		_this->value = value;
HXDLIN( 360)		 ::Dynamic value1 = this->type;
HXDLIN( 360)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 360)		_this1->label = HX_("type",ba,f2,08,4d);
HXDLIN( 360)		_this1->value = value1;
HXDLIN( 360)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(2)->init(0,_this)->init(1,_this1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,toString,return )

int FlxFramesCollection_obj::get_numFrames(){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_365_get_numFrames)
HXDLIN( 365)		return this->frames->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,get_numFrames,return )


::hx::ObjectPtr< FlxFramesCollection_obj > FlxFramesCollection_obj::__new( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxBasePoint border) {
	::hx::ObjectPtr< FlxFramesCollection_obj > __this = new FlxFramesCollection_obj();
	__this->__construct(parent,type,border);
	return __this;
}

::hx::ObjectPtr< FlxFramesCollection_obj > FlxFramesCollection_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxBasePoint border) {
	FlxFramesCollection_obj *__this = (FlxFramesCollection_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxFramesCollection_obj), true, "flixel.graphics.frames.FlxFramesCollection"));
	*(void **)__this = FlxFramesCollection_obj::_hx_vtable;
	__this->__construct(parent,type,border);
	return __this;
}

FlxFramesCollection_obj::FlxFramesCollection_obj()
{
}

void FlxFramesCollection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFramesCollection);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(framesHash,"framesHash");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_END_CLASS();
}

void FlxFramesCollection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(framesHash,"framesHash");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(border,"border");
}

::hx::Val FlxFramesCollection_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"border") ) { return ::hx::Val( border ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"numFrames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numFrames() ); }
		if (HX_FIELD_EQ(inName,"getByName") ) { return ::hx::Val( getByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"pushFrame") ) { return ::hx::Val( pushFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"addBorder") ) { return ::hx::Val( addBorder_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { return ::hx::Val( framesHash ); }
		if (HX_FIELD_EQ(inName,"getByIndex") ) { return ::hx::Val( getByIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkFrame") ) { return ::hx::Val( checkFrame_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFrameIndex") ) { return ::hx::Val( getFrameIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"addEmptyFrame") ) { return ::hx::Val( addEmptyFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"addAtlasFrame") ) { return ::hx::Val( addAtlasFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return ::hx::Val( get_numFrames_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getIndexByName") ) { return ::hx::Val( getIndexByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFrameOffset") ) { return ::hx::Val( setFrameOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"addFrameOffset") ) { return ::hx::Val( addFrameOffset_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setFrameDuration") ) { return ::hx::Val( setFrameDuration_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addSpriteSheetFrame") ) { return ::hx::Val( addSpriteSheetFrame_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setFramesOffsetByPrefix") ) { return ::hx::Val( setFramesOffsetByPrefix_dyn() ); }
		if (HX_FIELD_EQ(inName,"addFramesOffsetByPrefix") ) { return ::hx::Val( addFramesOffsetByPrefix_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"setFramesDurationByPrefix") ) { return ::hx::Val( setFramesDurationByPrefix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxFramesCollection_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::flixel::graphics::frames::FlxFrameCollectionType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { framesHash=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFramesCollection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("numFrames",8c,fa,86,5d));
	outFields->push(HX_("framesHash",94,d6,ee,b6));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("border",ec,4c,1a,64));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxFramesCollection_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxFramesCollection_obj,frames),HX_("frames",a6,af,85,ac)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(FlxFramesCollection_obj,framesHash),HX_("framesHash",94,d6,ee,b6)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxFramesCollection_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrameCollectionType */ ,(int)offsetof(FlxFramesCollection_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxFramesCollection_obj,border),HX_("border",ec,4c,1a,64)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxFramesCollection_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxFramesCollection_obj_sMemberFields[] = {
	HX_("frames",a6,af,85,ac),
	HX_("framesHash",94,d6,ee,b6),
	HX_("parent",2a,05,7e,ed),
	HX_("type",ba,f2,08,4d),
	HX_("border",ec,4c,1a,64),
	HX_("getByName",f8,b4,a4,8a),
	HX_("getByIndex",c5,af,09,ed),
	HX_("getIndexByName",7e,27,fe,ba),
	HX_("getFrameIndex",db,2b,ad,fd),
	HX_("destroy",fa,2c,86,24),
	HX_("addEmptyFrame",e1,97,1f,f1),
	HX_("addSpriteSheetFrame",b4,fd,bc,f0),
	HX_("addAtlasFrame",63,d4,89,53),
	HX_("setFrameOffset",1e,9f,45,e6),
	HX_("addFrameOffset",ff,6a,5e,d4),
	HX_("setFramesOffsetByPrefix",84,3c,82,38),
	HX_("addFramesOffsetByPrefix",83,6c,eb,d5),
	HX_("setFrameDuration",9f,4f,cd,ad),
	HX_("setFramesDurationByPrefix",45,af,83,ff),
	HX_("checkFrame",45,7a,73,16),
	HX_("pushFrame",f3,df,9e,4a),
	HX_("addBorder",ed,81,3e,1c),
	HX_("toString",ac,d0,6e,38),
	HX_("get_numFrames",63,ce,ea,1e),
	::String(null()) };

::hx::Class FlxFramesCollection_obj::__mClass;

void FlxFramesCollection_obj::__register()
{
	FlxFramesCollection_obj _hx_dummy;
	FlxFramesCollection_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.FlxFramesCollection",ff,be,62,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxFramesCollection_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxFramesCollection_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxFramesCollection_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxFramesCollection_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
