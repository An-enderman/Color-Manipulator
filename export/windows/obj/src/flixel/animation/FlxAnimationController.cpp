#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxPrerotatedAnimation
#include <flixel/animation/FlxPrerotatedAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5ed655cc53689dfd_8_new,"flixel.animation.FlxAnimationController","new",0x0b6477fc,"flixel.animation.FlxAnimationController.new","flixel/animation/FlxAnimationController.hx",8,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_93_update,"flixel.animation.FlxAnimationController","update",0x8fb487ed,"flixel.animation.FlxAnimationController.update","flixel/animation/FlxAnimationController.hx",93,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_107_copyFrom,"flixel.animation.FlxAnimationController","copyFrom",0x9c3f4ea3,"flixel.animation.FlxAnimationController.copyFrom","flixel/animation/FlxAnimationController.hx",107,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_131_createPrerotated,"flixel.animation.FlxAnimationController","createPrerotated",0xc538c8e6,"flixel.animation.FlxAnimationController.createPrerotated","flixel/animation/FlxAnimationController.hx",131,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_139_destroyAnimations,"flixel.animation.FlxAnimationController","destroyAnimations",0x0b136325,"flixel.animation.FlxAnimationController.destroyAnimations","flixel/animation/FlxAnimationController.hx",139,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_145_destroy,"flixel.animation.FlxAnimationController","destroy",0xb4f8d296,"flixel.animation.FlxAnimationController.destroy","flixel/animation/FlxAnimationController.hx",145,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_155_getFrameDuration,"flixel.animation.FlxAnimationController","getFrameDuration",0x557d290f,"flixel.animation.FlxAnimationController.getFrameDuration","flixel/animation/FlxAnimationController.hx",155,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_159_clearPrerotated,"flixel.animation.FlxAnimationController","clearPrerotated",0x8ef9ed6f,"flixel.animation.FlxAnimationController.clearPrerotated","flixel/animation/FlxAnimationController.hx",159,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_168_clearAnimations,"flixel.animation.FlxAnimationController","clearAnimations",0x7ffc9e78,"flixel.animation.FlxAnimationController.clearAnimations","flixel/animation/FlxAnimationController.hx",168,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_197_add,"flixel.animation.FlxAnimationController","add",0x0b5a99bd,"flixel.animation.FlxAnimationController.add","flixel/animation/FlxAnimationController.hx",197,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_243_remove,"flixel.animation.FlxAnimationController","remove",0x0d379e28,"flixel.animation.FlxAnimationController.remove","flixel/animation/FlxAnimationController.hx",243,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_261_append,"flixel.animation.FlxAnimationController","append",0x9882e3be,"flixel.animation.FlxAnimationController.append","flixel/animation/FlxAnimationController.hx",261,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_297_addByNames,"flixel.animation.FlxAnimationController","addByNames",0x17c20e34,"flixel.animation.FlxAnimationController.addByNames","flixel/animation/FlxAnimationController.hx",297,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_319_appendByNames,"flixel.animation.FlxAnimationController","appendByNames",0xcdc97653,"flixel.animation.FlxAnimationController.appendByNames","flixel/animation/FlxAnimationController.hx",319,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_349_addByStringIndices,"flixel.animation.FlxAnimationController","addByStringIndices",0x0f3d3cc2,"flixel.animation.FlxAnimationController.addByStringIndices","flixel/animation/FlxAnimationController.hx",349,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_375_appendByStringIndices,"flixel.animation.FlxAnimationController","appendByStringIndices",0x42285be1,"flixel.animation.FlxAnimationController.appendByStringIndices","flixel/animation/FlxAnimationController.hx",375,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_405_addByIndices,"flixel.animation.FlxAnimationController","addByIndices",0x4dbf3893,"flixel.animation.FlxAnimationController.addByIndices","flixel/animation/FlxAnimationController.hx",405,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_432_appendByIndices,"flixel.animation.FlxAnimationController","appendByIndices",0x22882672,"flixel.animation.FlxAnimationController.appendByIndices","flixel/animation/FlxAnimationController.hx",432,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_454_findSpriteFrame,"flixel.animation.FlxAnimationController","findSpriteFrame",0x746a2bcb,"flixel.animation.FlxAnimationController.findSpriteFrame","flixel/animation/FlxAnimationController.hx",454,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_484_addByPrefix,"flixel.animation.FlxAnimationController","addByPrefix",0x4347f9a6,"flixel.animation.FlxAnimationController.addByPrefix","flixel/animation/FlxAnimationController.hx",484,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_514_appendByPrefix,"flixel.animation.FlxAnimationController","appendByPrefix",0xd3bbaca7,"flixel.animation.FlxAnimationController.appendByPrefix","flixel/animation/FlxAnimationController.hx",514,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_546_play,"flixel.animation.FlxAnimationController","play",0xeddc2ed8,"flixel.animation.FlxAnimationController.play","flixel/animation/FlxAnimationController.hx",546,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_585_reset,"flixel.animation.FlxAnimationController","reset",0x5507106b,"flixel.animation.FlxAnimationController.reset","flixel/animation/FlxAnimationController.hx",585,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_596_finish,"flixel.animation.FlxAnimationController","finish",0x8f2e4237,"flixel.animation.FlxAnimationController.finish","flixel/animation/FlxAnimationController.hx",596,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_607_stop,"flixel.animation.FlxAnimationController","stop",0xefddf0e6,"flixel.animation.FlxAnimationController.stop","flixel/animation/FlxAnimationController.hx",607,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_618_pause,"flixel.animation.FlxAnimationController","pause",0x2b969d92,"flixel.animation.FlxAnimationController.pause","flixel/animation/FlxAnimationController.hx",618,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_629_resume,"flixel.animation.FlxAnimationController","resume",0x11336b91,"flixel.animation.FlxAnimationController.resume","flixel/animation/FlxAnimationController.hx",629,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_640_reverse,"flixel.animation.FlxAnimationController","reverse",0xab6edebe,"flixel.animation.FlxAnimationController.reverse","flixel/animation/FlxAnimationController.hx",640,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_651_getByName,"flixel.animation.FlxAnimationController","getByName",0x1940f994,"flixel.animation.FlxAnimationController.getByName","flixel/animation/FlxAnimationController.hx",651,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_659_randomFrame,"flixel.animation.FlxAnimationController","randomFrame",0x12c43ec6,"flixel.animation.FlxAnimationController.randomFrame","flixel/animation/FlxAnimationController.hx",659,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_670_fireCallback,"flixel.animation.FlxAnimationController","fireCallback",0x1523547f,"flixel.animation.FlxAnimationController.fireCallback","flixel/animation/FlxAnimationController.hx",670,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_681_fireFinishCallback,"flixel.animation.FlxAnimationController","fireFinishCallback",0x96b92372,"flixel.animation.FlxAnimationController.fireFinishCallback","flixel/animation/FlxAnimationController.hx",681,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_689_byNamesHelper,"flixel.animation.FlxAnimationController","byNamesHelper",0x4e6fbd5b,"flixel.animation.FlxAnimationController.byNamesHelper","flixel/animation/FlxAnimationController.hx",689,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_701_byStringIndicesHelper,"flixel.animation.FlxAnimationController","byStringIndicesHelper",0xccff0b69,"flixel.animation.FlxAnimationController.byStringIndicesHelper","flixel/animation/FlxAnimationController.hx",701,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_714_byIndicesHelper,"flixel.animation.FlxAnimationController","byIndicesHelper",0xe757113a,"flixel.animation.FlxAnimationController.byIndicesHelper","flixel/animation/FlxAnimationController.hx",714,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_725_byPrefixHelper,"flixel.animation.FlxAnimationController","byPrefixHelper",0x238152fb,"flixel.animation.FlxAnimationController.byPrefixHelper","flixel/animation/FlxAnimationController.hx",725,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_739_findByPrefix,"flixel.animation.FlxAnimationController","findByPrefix",0x32419106,"flixel.animation.FlxAnimationController.findByPrefix","flixel/animation/FlxAnimationController.hx",739,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_749_set_frameIndex,"flixel.animation.FlxAnimationController","set_frameIndex",0xd769c646,"flixel.animation.FlxAnimationController.set_frameIndex","flixel/animation/FlxAnimationController.hx",749,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_763_get_frameName,"flixel.animation.FlxAnimationController","get_frameName",0x1674c78b,"flixel.animation.FlxAnimationController.get_frameName","flixel/animation/FlxAnimationController.hx",763,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_767_set_frameName,"flixel.animation.FlxAnimationController","set_frameName",0x5b7aa997,"flixel.animation.FlxAnimationController.set_frameName","flixel/animation/FlxAnimationController.hx",767,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_787_get_name,"flixel.animation.FlxAnimationController","get_name",0x9c9870b8,"flixel.animation.FlxAnimationController.get_name","flixel/animation/FlxAnimationController.hx",787,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_797_set_name,"flixel.animation.FlxAnimationController","set_name",0x4af5ca2c,"flixel.animation.FlxAnimationController.set_name","flixel/animation/FlxAnimationController.hx",797,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_809_getAnimationList,"flixel.animation.FlxAnimationController","getAnimationList",0xa21179f0,"flixel.animation.FlxAnimationController.getAnimationList","flixel/animation/FlxAnimationController.hx",809,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_827_getNameList,"flixel.animation.FlxAnimationController","getNameList",0x0bd9a29b,"flixel.animation.FlxAnimationController.getNameList","flixel/animation/FlxAnimationController.hx",827,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_844_exists,"flixel.animation.FlxAnimationController","exists",0xc88f1fc0,"flixel.animation.FlxAnimationController.exists","flixel/animation/FlxAnimationController.hx",844,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_854_rename,"flixel.animation.FlxAnimationController","rename",0x0dd62d62,"flixel.animation.FlxAnimationController.rename","flixel/animation/FlxAnimationController.hx",854,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_868_get_curAnim,"flixel.animation.FlxAnimationController","get_curAnim",0xd32cfb64,"flixel.animation.FlxAnimationController.get_curAnim","flixel/animation/FlxAnimationController.hx",868,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_872_set_curAnim,"flixel.animation.FlxAnimationController","set_curAnim",0xdd9a0270,"flixel.animation.FlxAnimationController.set_curAnim","flixel/animation/FlxAnimationController.hx",872,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_889_get_paused,"flixel.animation.FlxAnimationController","get_paused",0x1a2b745b,"flixel.animation.FlxAnimationController.get_paused","flixel/animation/FlxAnimationController.hx",889,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_899_set_paused,"flixel.animation.FlxAnimationController","set_paused",0x1da912cf,"flixel.animation.FlxAnimationController.set_paused","flixel/animation/FlxAnimationController.hx",899,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_915_get_finished,"flixel.animation.FlxAnimationController","get_finished",0x1eabcc5f,"flixel.animation.FlxAnimationController.get_finished","flixel/animation/FlxAnimationController.hx",915,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_925_set_finished,"flixel.animation.FlxAnimationController","set_finished",0x33a4efd3,"flixel.animation.FlxAnimationController.set_finished","flixel/animation/FlxAnimationController.hx",925,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_935_get_frames,"flixel.animation.FlxAnimationController","get_frames",0xd72ce353,"flixel.animation.FlxAnimationController.get_frames","flixel/animation/FlxAnimationController.hx",935,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_940_get_numFrames,"flixel.animation.FlxAnimationController","get_numFrames",0x3d7b90ff,"flixel.animation.FlxAnimationController.get_numFrames","flixel/animation/FlxAnimationController.hx",940,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_951_getFrameIndex,"flixel.animation.FlxAnimationController","getFrameIndex",0x1c3dee77,"flixel.animation.FlxAnimationController.getFrameIndex","flixel/animation/FlxAnimationController.hx",951,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_89_boot,"flixel.animation.FlxAnimationController","boot",0xe49d8516,"flixel.animation.FlxAnimationController.boot","flixel/animation/FlxAnimationController.hx",89,0xa6f01372)
namespace flixel{
namespace animation{

void FlxAnimationController_obj::__construct( ::flixel::FlxSprite sprite){
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_8_new)
HXLINE(  90)		this->followGlobalSpeed = true;
HXLINE(  80)		this->_animations =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  18)		this->frameIndex = -1;
HXLINE(  86)		this->_sprite = sprite;
            	}

Dynamic FlxAnimationController_obj::__CreateEmpty() { return new FlxAnimationController_obj; }

void *FlxAnimationController_obj::_hx_vtable = 0;

Dynamic FlxAnimationController_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAnimationController_obj > _hx_result = new FlxAnimationController_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxAnimationController_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33fb2b2e;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_animation_FlxAnimationController__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::animation::FlxAnimationController_obj::destroy,
};

void *FlxAnimationController_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_animation_FlxAnimationController__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxAnimationController_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_93_update)
HXDLIN(  93)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE(  95)			Float e = elapsed;
HXLINE(  96)			if (this->followGlobalSpeed) {
HXLINE(  96)				e = (e * ::flixel::animation::FlxAnimationController_obj::globalSpeed);
            			}
HXLINE(  98)			this->_curAnim->update(e);
            		}
            		else {
HXLINE( 100)			if (::hx::IsNotNull( this->_prerotated )) {
HXLINE( 102)				this->_prerotated->set_angle(this->_sprite->angle);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,update,(void))

 ::flixel::animation::FlxAnimationController FlxAnimationController_obj::copyFrom( ::flixel::animation::FlxAnimationController controller){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_107_copyFrom)
HXLINE( 108)		this->destroyAnimations();
HXLINE( 110)		{
HXLINE( 110)			 ::Dynamic anim = controller->_animations->iterator();
HXDLIN( 110)			while(( (bool)(anim->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 110)				 ::flixel::animation::FlxAnimation anim1 = ( ( ::flixel::animation::FlxAnimation)(anim->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 112)				this->add(anim1->name,anim1->frames,anim1->frameRate,anim1->looped,anim1->flipX,anim1->flipY);
            			}
            		}
HXLINE( 115)		if (::hx::IsNotNull( controller->_prerotated )) {
HXLINE( 117)			this->createPrerotated(null());
            		}
HXLINE( 120)		if (::hx::IsNotNull( controller->get_name() )) {
HXLINE( 122)			this->set_name(controller->get_name());
            		}
HXLINE( 125)		this->set_frameIndex(controller->frameIndex);
HXLINE( 127)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,copyFrom,return )

void FlxAnimationController_obj::createPrerotated( ::flixel::animation::FlxAnimationController Controller){
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_131_createPrerotated)
HXLINE( 132)		this->destroyAnimations();
HXLINE( 133)		if (::hx::IsNull( Controller )) {
HXLINE( 133)			Controller = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 134)		this->_prerotated =  ::flixel::animation::FlxPrerotatedAnimation_obj::__alloc( HX_CTX ,Controller,Controller->_sprite->bakedRotationAngle);
HXLINE( 135)		this->_prerotated->set_angle(this->_sprite->angle);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,createPrerotated,(void))

void FlxAnimationController_obj::destroyAnimations(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_139_destroyAnimations)
HXLINE( 140)		this->clearAnimations();
HXLINE( 141)		this->clearPrerotated();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,destroyAnimations,(void))

void FlxAnimationController_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_145_destroy)
HXLINE( 146)		this->destroyAnimations();
HXLINE( 147)		this->_animations = null();
HXLINE( 148)		this->callback = null();
HXLINE( 149)		this->_sprite = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,destroy,(void))

Float FlxAnimationController_obj::getFrameDuration(int index){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_155_getFrameDuration)
HXDLIN( 155)		return this->_sprite->frames->frames->__get(index).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->duration;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,getFrameDuration,return )

void FlxAnimationController_obj::clearPrerotated(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_159_clearPrerotated)
HXLINE( 160)		if (::hx::IsNotNull( this->_prerotated )) {
HXLINE( 162)			this->_prerotated->destroy();
            		}
HXLINE( 164)		this->_prerotated = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,clearPrerotated,(void))

void FlxAnimationController_obj::clearAnimations(){
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_168_clearAnimations)
HXLINE( 169)		if (::hx::IsNotNull( this->_animations )) {
HXLINE( 171)			 ::flixel::animation::FlxAnimation anim;
HXLINE( 172)			{
HXLINE( 172)				 ::Dynamic key = this->_animations->keys();
HXDLIN( 172)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 172)					::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 174)					anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(key1)) );
HXLINE( 175)					if (::hx::IsNotNull( anim )) {
HXLINE( 177)						anim->destroy();
            					}
            				}
            			}
            		}
HXLINE( 182)		this->_animations =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 183)		this->_curAnim = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,clearAnimations,(void))

void FlxAnimationController_obj::add(::String name,::Array< int > frames,::hx::Null< Float >  __o_frameRate,::hx::Null< bool >  __o_looped,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY){
            		Float frameRate = __o_frameRate.Default(((Float)30.0));
            		bool looped = __o_looped.Default(true);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_197_add)
HXLINE( 198)		if ((this->_sprite->numFrames == 0)) {
HXLINE( 201)			return;
            		}
HXLINE( 205)		::Array< int > framesToAdd = frames;
HXLINE( 206)		bool hasInvalidFrames = false;
HXLINE( 207)		int i = framesToAdd->length;
HXLINE( 208)		while(true){
HXLINE( 208)			i = (i - 1);
HXDLIN( 208)			if (!(((i + 1) >= 0))) {
HXLINE( 208)				goto _hx_goto_11;
            			}
HXLINE( 210)			int frame = framesToAdd->__get(i);
HXLINE( 211)			if ((frame >= this->_sprite->numFrames)) {
HXLINE( 214)				hasInvalidFrames = true;
HXLINE( 218)				if (::hx::IsPointerEq( framesToAdd,frames )) {
HXLINE( 219)					framesToAdd = frames->copy();
            				}
HXLINE( 221)				framesToAdd->removeRange(i,1);
            			}
            		}
            		_hx_goto_11:;
HXLINE( 225)		if ((framesToAdd->length > 0)) {
HXLINE( 227)			 ::flixel::animation::FlxAnimation anim =  ::flixel::animation::FlxAnimation_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),name,framesToAdd,frameRate,looped,flipX,flipY);
HXLINE( 228)			this->_animations->set(name,anim);
HXLINE( 230)			bool hasInvalidFrames1 = hasInvalidFrames;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxAnimationController_obj,add,(void))

void FlxAnimationController_obj::remove(::String Name){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_243_remove)
HXLINE( 244)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(Name)) );
HXLINE( 245)		if (::hx::IsNotNull( anim )) {
HXLINE( 247)			this->_animations->remove(Name);
HXLINE( 248)			anim->destroy();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,remove,(void))

void FlxAnimationController_obj::append(::String Name,::Array< int > Frames){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_261_append)
HXLINE( 262)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(Name)) );
HXLINE( 263)		if (::hx::IsNull( anim )) {
HXLINE( 267)			return;
            		}
HXLINE( 270)		bool hasInvalidFrames = false;
HXLINE( 273)		{
HXLINE( 273)			int _g = 0;
HXDLIN( 273)			while((_g < Frames->length)){
HXLINE( 273)				int frame = Frames->__get(_g);
HXDLIN( 273)				_g = (_g + 1);
HXLINE( 275)				if ((frame < this->_sprite->numFrames)) {
HXLINE( 276)					anim->frames->push(frame);
            				}
            				else {
HXLINE( 278)					hasInvalidFrames = true;
            				}
            			}
            		}
HXLINE( 281)		bool hasInvalidFrames1 = hasInvalidFrames;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,append,(void))

void FlxAnimationController_obj::addByNames(::String Name,::Array< ::String > FrameNames,::hx::Null< int >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_FlipX,::hx::Null< bool >  __o_FlipY){
            		int FrameRate = __o_FrameRate.Default(30);
            		bool Looped = __o_Looped.Default(true);
            		bool FlipX = __o_FlipX.Default(false);
            		bool FlipY = __o_FlipY.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_297_addByNames)
HXDLIN( 297)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 299)			::Array< int > indices = ::Array_obj< int >::__new();
HXLINE( 300)			this->byNamesHelper(indices,FrameNames);
HXLINE( 302)			if ((indices->length > 0)) {
HXLINE( 304)				 ::flixel::animation::FlxAnimation anim =  ::flixel::animation::FlxAnimation_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),Name,indices,FrameRate,Looped,FlipX,FlipY);
HXLINE( 305)				this->_animations->set(Name,anim);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxAnimationController_obj,addByNames,(void))

void FlxAnimationController_obj::appendByNames(::String Name,::Array< ::String > FrameNames){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_319_appendByNames)
HXLINE( 320)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(Name)) );
HXLINE( 321)		if (::hx::IsNull( anim )) {
HXLINE( 324)			return;
            		}
HXLINE( 327)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 329)			this->byNamesHelper(anim->frames,FrameNames);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,appendByNames,(void))

void FlxAnimationController_obj::addByStringIndices(::String Name,::String Prefix,::Array< ::String > Indices,::String Postfix,::hx::Null< int >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_FlipX,::hx::Null< bool >  __o_FlipY){
            		int FrameRate = __o_FrameRate.Default(30);
            		bool Looped = __o_Looped.Default(true);
            		bool FlipX = __o_FlipX.Default(false);
            		bool FlipY = __o_FlipY.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_349_addByStringIndices)
HXDLIN( 349)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 351)			::Array< int > frameIndices = ::Array_obj< int >::__new();
HXLINE( 353)			this->byStringIndicesHelper(frameIndices,Prefix,Indices,Postfix);
HXLINE( 355)			if ((frameIndices->length > 0)) {
HXLINE( 357)				 ::flixel::animation::FlxAnimation anim =  ::flixel::animation::FlxAnimation_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),Name,frameIndices,FrameRate,Looped,FlipX,FlipY);
HXLINE( 358)				this->_animations->set(Name,anim);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxAnimationController_obj,addByStringIndices,(void))

void FlxAnimationController_obj::appendByStringIndices(::String Name,::String Prefix,::Array< ::String > Indices,::String Postfix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_375_appendByStringIndices)
HXLINE( 376)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(Name)) );
HXLINE( 377)		if (::hx::IsNull( anim )) {
HXLINE( 380)			return;
            		}
HXLINE( 383)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 386)			this->byStringIndicesHelper(anim->frames,Prefix,Indices,Postfix);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,appendByStringIndices,(void))

void FlxAnimationController_obj::addByIndices(::String Name,::String Prefix,::Array< int > Indices,::String Postfix,::hx::Null< int >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_FlipX,::hx::Null< bool >  __o_FlipY){
            		int FrameRate = __o_FrameRate.Default(30);
            		bool Looped = __o_Looped.Default(true);
            		bool FlipX = __o_FlipX.Default(false);
            		bool FlipY = __o_FlipY.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_405_addByIndices)
HXDLIN( 405)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 407)			::Array< int > frameIndices = ::Array_obj< int >::__new();
HXLINE( 409)			this->byIndicesHelper(frameIndices,Prefix,Indices,Postfix);
HXLINE( 411)			if ((frameIndices->length > 0)) {
HXLINE( 413)				 ::flixel::animation::FlxAnimation anim =  ::flixel::animation::FlxAnimation_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),Name,frameIndices,FrameRate,Looped,FlipX,FlipY);
HXLINE( 414)				this->_animations->set(Name,anim);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxAnimationController_obj,addByIndices,(void))

void FlxAnimationController_obj::appendByIndices(::String Name,::String Prefix,::Array< int > Indices,::String Postfix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_432_appendByIndices)
HXLINE( 433)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(Name)) );
HXLINE( 434)		if (::hx::IsNull( anim )) {
HXLINE( 437)			return;
            		}
HXLINE( 440)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 443)			this->byIndicesHelper(anim->frames,Prefix,Indices,Postfix);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,appendByIndices,(void))

int FlxAnimationController_obj::findSpriteFrame(::String prefix,int index,::String postfix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_454_findSpriteFrame)
HXLINE( 455)		::Array< ::Dynamic> frames = this->_sprite->frames->frames;
HXLINE( 456)		{
HXLINE( 456)			int _g = 0;
HXDLIN( 456)			int _g1 = frames->length;
HXDLIN( 456)			while((_g < _g1)){
HXLINE( 456)				_g = (_g + 1);
HXDLIN( 456)				int i = (_g - 1);
HXLINE( 458)				 ::flixel::graphics::frames::FlxFrame frame = frames->__get(i).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXLINE( 459)				::String name = frame->name;
HXLINE( 460)				bool _hx_tmp;
HXDLIN( 460)				if (::StringTools_obj::startsWith(name,prefix)) {
HXLINE( 460)					_hx_tmp = ::StringTools_obj::endsWith(name,postfix);
            				}
            				else {
HXLINE( 460)					_hx_tmp = false;
            				}
HXDLIN( 460)				if (_hx_tmp) {
HXLINE( 462)					 ::Dynamic frameIndex = ::Std_obj::parseInt(name.substring(prefix.length,(name.length - postfix.length)));
HXLINE( 463)					if (::hx::IsEq( frameIndex,index )) {
HXLINE( 464)						return i;
            					}
            				}
            			}
            		}
HXLINE( 468)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimationController_obj,findSpriteFrame,return )

void FlxAnimationController_obj::addByPrefix(::String name,::String prefix,::hx::Null< int >  __o_frameRate,::hx::Null< bool >  __o_looped,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY){
            		int frameRate = __o_frameRate.Default(30);
            		bool looped = __o_looped.Default(true);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_484_addByPrefix)
HXDLIN( 484)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 486)			::Array< ::Dynamic> animFrames = ::Array_obj< ::Dynamic>::__new();
HXLINE( 487)			this->findByPrefix(animFrames,prefix);
HXLINE( 489)			if ((animFrames->length > 0)) {
HXLINE( 491)				::Array< int > frameIndices = ::Array_obj< int >::__new();
HXLINE( 492)				this->byPrefixHelper(frameIndices,animFrames,prefix);
HXLINE( 494)				if ((frameIndices->length > 0)) {
HXLINE( 496)					 ::flixel::animation::FlxAnimation anim =  ::flixel::animation::FlxAnimation_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),name,frameIndices,frameRate,looped,flipX,flipY);
HXLINE( 497)					this->_animations->set(name,anim);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxAnimationController_obj,addByPrefix,(void))

void FlxAnimationController_obj::appendByPrefix(::String name,::String prefix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_514_appendByPrefix)
HXLINE( 515)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(name)) );
HXLINE( 516)		if (::hx::IsNull( anim )) {
HXLINE( 519)			return;
            		}
HXLINE( 522)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 524)			::Array< ::Dynamic> animFrames = ::Array_obj< ::Dynamic>::__new();
HXLINE( 525)			this->findByPrefix(animFrames,prefix);
HXLINE( 527)			if ((animFrames->length > 0)) {
HXLINE( 530)				this->byPrefixHelper(anim->frames,animFrames,prefix);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,appendByPrefix,(void))

void FlxAnimationController_obj::play(::String AnimName,::hx::Null< bool >  __o_Force,::hx::Null< bool >  __o_Reversed,::hx::Null< int >  __o_Frame){
            		bool Force = __o_Force.Default(false);
            		bool Reversed = __o_Reversed.Default(false);
            		int Frame = __o_Frame.Default(0);
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_546_play)
HXLINE( 547)		if (::hx::IsNull( AnimName )) {
HXLINE( 549)			if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 551)				this->_curAnim->stop();
            			}
HXLINE( 553)			this->_curAnim = null();
            		}
HXLINE( 556)		bool _hx_tmp;
HXDLIN( 556)		if (::hx::IsNotNull( AnimName )) {
HXLINE( 556)			_hx_tmp = ::hx::IsNull( this->_animations->get(AnimName) );
            		}
            		else {
HXLINE( 556)			_hx_tmp = true;
            		}
HXDLIN( 556)		if (_hx_tmp) {
HXLINE( 559)			return;
            		}
HXLINE( 562)		bool oldFlipX = false;
HXLINE( 563)		bool oldFlipY = false;
HXLINE( 565)		bool _hx_tmp1;
HXDLIN( 565)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 565)			_hx_tmp1 = (AnimName != this->_curAnim->name);
            		}
            		else {
HXLINE( 565)			_hx_tmp1 = false;
            		}
HXDLIN( 565)		if (_hx_tmp1) {
HXLINE( 567)			oldFlipX = this->_curAnim->flipX;
HXLINE( 568)			oldFlipY = this->_curAnim->flipY;
HXLINE( 569)			this->_curAnim->stop();
            		}
HXLINE( 571)		this->_curAnim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(AnimName)) );
HXLINE( 572)		this->_curAnim->play(Force,Reversed,Frame);
HXLINE( 574)		bool _hx_tmp2;
HXDLIN( 574)		if ((oldFlipX == this->_curAnim->flipX)) {
HXLINE( 574)			_hx_tmp2 = (oldFlipY != this->_curAnim->flipY);
            		}
            		else {
HXLINE( 574)			_hx_tmp2 = true;
            		}
HXDLIN( 574)		if (_hx_tmp2) {
HXLINE( 576)			this->_sprite->dirty = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,play,(void))

void FlxAnimationController_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_585_reset)
HXDLIN( 585)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 587)			this->_curAnim->reset();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,reset,(void))

void FlxAnimationController_obj::finish(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_596_finish)
HXDLIN( 596)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 598)			this->_curAnim->finish();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,finish,(void))

void FlxAnimationController_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_607_stop)
HXDLIN( 607)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 609)			this->_curAnim->stop();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,stop,(void))

void FlxAnimationController_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_618_pause)
HXDLIN( 618)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 620)			this->_curAnim->pause();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,pause,(void))

void FlxAnimationController_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_629_resume)
HXDLIN( 629)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 631)			this->_curAnim->paused = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,resume,(void))

void FlxAnimationController_obj::reverse(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_640_reverse)
HXDLIN( 640)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 642)			this->_curAnim->reverse();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,reverse,(void))

 ::flixel::animation::FlxAnimation FlxAnimationController_obj::getByName(::String name){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_651_getByName)
HXDLIN( 651)		return ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(name)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,getByName,return )

void FlxAnimationController_obj::randomFrame(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_659_randomFrame)
HXLINE( 660)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 662)			this->_curAnim->stop();
HXLINE( 663)			this->_curAnim = null();
            		}
HXLINE( 665)		this->set_frameIndex(::flixel::FlxG_obj::random->_hx_int(0,(this->_sprite->numFrames - 1),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,randomFrame,(void))

void FlxAnimationController_obj::fireCallback(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_670_fireCallback)
HXDLIN( 670)		if (::hx::IsNotNull( this->callback )) {
HXLINE( 672)			::String name;
HXDLIN( 672)			if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 672)				name = this->_curAnim->name;
            			}
            			else {
HXLINE( 672)				name = null();
            			}
HXLINE( 673)			int number;
HXDLIN( 673)			if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 673)				number = this->_curAnim->curFrame;
            			}
            			else {
HXLINE( 673)				number = this->frameIndex;
            			}
HXLINE( 674)			this->callback(name,number,this->frameIndex);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,fireCallback,(void))

void FlxAnimationController_obj::fireFinishCallback(::String name){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_681_fireFinishCallback)
HXDLIN( 681)		if (::hx::IsNotNull( this->finishCallback )) {
HXLINE( 683)			this->finishCallback(name);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,fireFinishCallback,(void))

void FlxAnimationController_obj::byNamesHelper(::Array< int > AddTo,::Array< ::String > FrameNames){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_689_byNamesHelper)
HXDLIN( 689)		int _g = 0;
HXDLIN( 689)		while((_g < FrameNames->length)){
HXDLIN( 689)			::String frameName = FrameNames->__get(_g);
HXDLIN( 689)			_g = (_g + 1);
HXLINE( 691)			if (this->_sprite->frames->framesHash->exists(frameName)) {
HXLINE( 693)				 ::flixel::graphics::frames::FlxFrame frameToAdd = ( ( ::flixel::graphics::frames::FlxFrame)(this->_sprite->frames->framesHash->get(frameName)) );
HXLINE( 694)				AddTo->push(this->_sprite->frames->frames->indexOf(frameToAdd,null()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,byNamesHelper,(void))

void FlxAnimationController_obj::byStringIndicesHelper(::Array< int > AddTo,::String Prefix,::Array< ::String > Indices,::String Postfix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_701_byStringIndicesHelper)
HXDLIN( 701)		int _g = 0;
HXDLIN( 701)		while((_g < Indices->length)){
HXDLIN( 701)			::String index = Indices->__get(_g);
HXDLIN( 701)			_g = (_g + 1);
HXLINE( 703)			::String name = ((Prefix + index) + Postfix);
HXLINE( 704)			if (this->_sprite->frames->framesHash->exists(name)) {
HXLINE( 706)				 ::flixel::graphics::frames::FlxFrame frameToAdd = ( ( ::flixel::graphics::frames::FlxFrame)(this->_sprite->frames->framesHash->get(name)) );
HXLINE( 707)				AddTo->push(this->_sprite->frames->frames->indexOf(frameToAdd,null()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,byStringIndicesHelper,(void))

void FlxAnimationController_obj::byIndicesHelper(::Array< int > AddTo,::String Prefix,::Array< int > Indices,::String Postfix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_714_byIndicesHelper)
HXDLIN( 714)		int _g = 0;
HXDLIN( 714)		while((_g < Indices->length)){
HXDLIN( 714)			int index = Indices->__get(_g);
HXDLIN( 714)			_g = (_g + 1);
HXLINE( 716)			int indexToAdd = this->findSpriteFrame(Prefix,index,Postfix);
HXLINE( 717)			if ((indexToAdd != -1)) {
HXLINE( 719)				AddTo->push(indexToAdd);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,byIndicesHelper,(void))

void FlxAnimationController_obj::byPrefixHelper(::Array< int > AddTo,::Array< ::Dynamic> AnimFrames,::String Prefix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_725_byPrefixHelper)
HXLINE( 726)		::String name = AnimFrames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->name;
HXLINE( 727)		int postIndex = name.indexOf(HX_(".",2e,00,00,00),Prefix.length);
HXLINE( 728)		int postFix;
HXDLIN( 728)		if ((postIndex == -1)) {
HXLINE( 728)			postFix = name.length;
            		}
            		else {
HXLINE( 728)			postFix = postIndex;
            		}
HXDLIN( 728)		::String postFix1 = name.substring(postFix,name.length);
HXLINE( 729)		::flixel::graphics::frames::FlxFrame_obj::sort(AnimFrames,Prefix.length,postFix1.length);
HXLINE( 731)		{
HXLINE( 731)			int _g = 0;
HXDLIN( 731)			while((_g < AnimFrames->length)){
HXLINE( 731)				 ::flixel::graphics::frames::FlxFrame animFrame = AnimFrames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 731)				_g = (_g + 1);
HXLINE( 733)				AddTo->push(this->_sprite->frames->frames->indexOf(animFrame,null()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimationController_obj,byPrefixHelper,(void))

void FlxAnimationController_obj::findByPrefix(::Array< ::Dynamic> AnimFrames,::String Prefix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_739_findByPrefix)
HXDLIN( 739)		int _g = 0;
HXDLIN( 739)		::Array< ::Dynamic> _g1 = this->_sprite->frames->frames;
HXDLIN( 739)		while((_g < _g1->length)){
HXDLIN( 739)			 ::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 739)			_g = (_g + 1);
HXLINE( 741)			bool _hx_tmp;
HXDLIN( 741)			if (::hx::IsNotNull( frame->name )) {
HXLINE( 741)				_hx_tmp = ::StringTools_obj::startsWith(frame->name,Prefix);
            			}
            			else {
HXLINE( 741)				_hx_tmp = false;
            			}
HXDLIN( 741)			if (_hx_tmp) {
HXLINE( 743)				AnimFrames->push(frame);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,findByPrefix,(void))

int FlxAnimationController_obj::set_frameIndex(int Frame){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_749_set_frameIndex)
HXLINE( 750)		bool _hx_tmp;
HXDLIN( 750)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 750)			_hx_tmp = (this->_sprite->numFrames > 0);
            		}
            		else {
HXLINE( 750)			_hx_tmp = false;
            		}
HXDLIN( 750)		if (_hx_tmp) {
HXLINE( 752)			Frame = ::hx::Mod(Frame,this->_sprite->numFrames);
HXLINE( 753)			this->_sprite->set_frame(this->_sprite->frames->frames->__get(Frame).StaticCast<  ::flixel::graphics::frames::FlxFrame >());
HXLINE( 754)			this->frameIndex = Frame;
HXLINE( 755)			if (::hx::IsNotNull( this->callback )) {
HXLINE( 755)				::String name;
HXDLIN( 755)				if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 755)					name = this->_curAnim->name;
            				}
            				else {
HXLINE( 755)					name = null();
            				}
HXDLIN( 755)				int number;
HXDLIN( 755)				if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 755)					number = this->_curAnim->curFrame;
            				}
            				else {
HXLINE( 755)					number = this->frameIndex;
            				}
HXDLIN( 755)				this->callback(name,number,this->frameIndex);
            			}
            		}
HXLINE( 758)		return this->frameIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_frameIndex,return )

::String FlxAnimationController_obj::get_frameName(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_763_get_frameName)
HXDLIN( 763)		return this->_sprite->frame->name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_frameName,return )

::String FlxAnimationController_obj::set_frameName(::String Value){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_767_set_frameName)
HXLINE( 768)		bool _hx_tmp;
HXDLIN( 768)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 768)			_hx_tmp = this->_sprite->frames->framesHash->exists(Value);
            		}
            		else {
HXLINE( 768)			_hx_tmp = false;
            		}
HXDLIN( 768)		if (_hx_tmp) {
HXLINE( 770)			if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 772)				this->_curAnim->stop();
HXLINE( 773)				this->_curAnim = null();
            			}
HXLINE( 776)			 ::flixel::graphics::frames::FlxFrame frame = ( ( ::flixel::graphics::frames::FlxFrame)(this->_sprite->frames->framesHash->get(Value)) );
HXLINE( 777)			if (::hx::IsNotNull( frame )) {
HXLINE( 779)				this->set_frameIndex(this->_sprite->frames->frames->indexOf(frame,null()));
            			}
            		}
HXLINE( 783)		return Value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_frameName,return )

::String FlxAnimationController_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_787_get_name)
HXLINE( 788)		::String animName = null();
HXLINE( 789)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 791)			animName = this->_curAnim->name;
            		}
HXLINE( 793)		return animName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_name,return )

::String FlxAnimationController_obj::set_name(::String AnimName){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_797_set_name)
HXLINE( 798)		this->play(AnimName,null(),null(),null());
HXLINE( 799)		return AnimName;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_name,return )

::Array< ::Dynamic> FlxAnimationController_obj::getAnimationList(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_809_getAnimationList)
HXLINE( 810)		::Array< ::Dynamic> animList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 812)		{
HXLINE( 812)			 ::Dynamic anims = this->_animations->iterator();
HXDLIN( 812)			while(( (bool)(anims->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 812)				 ::flixel::animation::FlxAnimation anims1 = ( ( ::flixel::animation::FlxAnimation)(anims->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 814)				animList->push(anims1);
            			}
            		}
HXLINE( 817)		return animList;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,getAnimationList,return )

::Array< ::String > FlxAnimationController_obj::getNameList(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_827_getNameList)
HXLINE( 828)		::Array< ::String > namesList = ::Array_obj< ::String >::__new(0);
HXLINE( 829)		{
HXLINE( 829)			 ::Dynamic names = this->_animations->keys();
HXDLIN( 829)			while(( (bool)(names->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 829)				::String names1 = ( (::String)(names->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 831)				namesList->push(names1);
            			}
            		}
HXLINE( 834)		return namesList;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,getNameList,return )

bool FlxAnimationController_obj::exists(::String name){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_844_exists)
HXDLIN( 844)		return this->_animations->exists(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,exists,return )

void FlxAnimationController_obj::rename(::String oldName,::String newName){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_854_rename)
HXLINE( 855)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(oldName)) );
HXLINE( 856)		if (::hx::IsNull( anim )) {
HXLINE( 859)			return;
            		}
HXLINE( 861)		this->_animations->set(newName,anim);
HXLINE( 862)		anim->name = newName;
HXLINE( 863)		this->_animations->remove(oldName);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,rename,(void))

 ::flixel::animation::FlxAnimation FlxAnimationController_obj::get_curAnim(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_868_get_curAnim)
HXDLIN( 868)		return this->_curAnim;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_curAnim,return )

 ::flixel::animation::FlxAnimation FlxAnimationController_obj::set_curAnim( ::flixel::animation::FlxAnimation anim){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_872_set_curAnim)
HXLINE( 873)		if (::hx::IsInstanceNotEq( anim,this->_curAnim )) {
HXLINE( 875)			if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 877)				this->_curAnim->stop();
            			}
HXLINE( 880)			if (::hx::IsNotNull( anim )) {
HXLINE( 882)				anim->play(null(),null(),null());
            			}
            		}
HXLINE( 885)		return (this->_curAnim = anim);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_curAnim,return )

bool FlxAnimationController_obj::get_paused(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_889_get_paused)
HXLINE( 890)		bool paused = false;
HXLINE( 891)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 893)			paused = this->_curAnim->paused;
            		}
HXLINE( 895)		return paused;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_paused,return )

bool FlxAnimationController_obj::set_paused(bool value){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_899_set_paused)
HXLINE( 900)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 902)			if (value) {
HXLINE( 904)				this->_curAnim->pause();
            			}
            			else {
HXLINE( 908)				this->_curAnim->paused = false;
            			}
            		}
HXLINE( 911)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_paused,return )

bool FlxAnimationController_obj::get_finished(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_915_get_finished)
HXLINE( 916)		bool finished = true;
HXLINE( 917)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 919)			finished = this->_curAnim->finished;
            		}
HXLINE( 921)		return finished;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_finished,return )

bool FlxAnimationController_obj::set_finished(bool value){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_925_set_finished)
HXLINE( 926)		bool _hx_tmp;
HXDLIN( 926)		if (value) {
HXLINE( 926)			_hx_tmp = ::hx::IsNotNull( this->_curAnim );
            		}
            		else {
HXLINE( 926)			_hx_tmp = false;
            		}
HXDLIN( 926)		if (_hx_tmp) {
HXLINE( 928)			this->_curAnim->finish();
            		}
HXLINE( 930)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_finished,return )

int FlxAnimationController_obj::get_frames(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_935_get_frames)
HXDLIN( 935)		return this->_sprite->numFrames;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_frames,return )

int FlxAnimationController_obj::get_numFrames(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_940_get_numFrames)
HXDLIN( 940)		return this->_sprite->numFrames;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_numFrames,return )

int FlxAnimationController_obj::getFrameIndex( ::flixel::graphics::frames::FlxFrame frame){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_951_getFrameIndex)
HXDLIN( 951)		return this->_sprite->frames->frames->indexOf(frame,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,getFrameIndex,return )

Float FlxAnimationController_obj::globalSpeed;


::hx::ObjectPtr< FlxAnimationController_obj > FlxAnimationController_obj::__new( ::flixel::FlxSprite sprite) {
	::hx::ObjectPtr< FlxAnimationController_obj > __this = new FlxAnimationController_obj();
	__this->__construct(sprite);
	return __this;
}

::hx::ObjectPtr< FlxAnimationController_obj > FlxAnimationController_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite sprite) {
	FlxAnimationController_obj *__this = (FlxAnimationController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAnimationController_obj), true, "flixel.animation.FlxAnimationController"));
	*(void **)__this = FlxAnimationController_obj::_hx_vtable;
	__this->__construct(sprite);
	return __this;
}

FlxAnimationController_obj::FlxAnimationController_obj()
{
}

void FlxAnimationController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAnimationController);
	HX_MARK_MEMBER_NAME(frameIndex,"frameIndex");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(finishCallback,"finishCallback");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_curAnim,"_curAnim");
	HX_MARK_MEMBER_NAME(_animations,"_animations");
	HX_MARK_MEMBER_NAME(_prerotated,"_prerotated");
	HX_MARK_MEMBER_NAME(followGlobalSpeed,"followGlobalSpeed");
	HX_MARK_END_CLASS();
}

void FlxAnimationController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameIndex,"frameIndex");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(finishCallback,"finishCallback");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_curAnim,"_curAnim");
	HX_VISIT_MEMBER_NAME(_animations,"_animations");
	HX_VISIT_MEMBER_NAME(_prerotated,"_prerotated");
	HX_VISIT_MEMBER_NAME(followGlobalSpeed,"followGlobalSpeed");
}

::hx::Val FlxAnimationController_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_name() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paused() ); }
		if (HX_FIELD_EQ(inName,"frames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_frames() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"append") ) { return ::hx::Val( append_dyn() ); }
		if (HX_FIELD_EQ(inName,"finish") ) { return ::hx::Val( finish_dyn() ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"rename") ) { return ::hx::Val( rename_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curAnim") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_curAnim() ); }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return ::hx::Val( _sprite ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return ::hx::Val( reverse_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_finished() ); }
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"_curAnim") ) { return ::hx::Val( _curAnim ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return ::hx::Val( get_name_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return ::hx::Val( set_name_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_frameName() ); }
		if (HX_FIELD_EQ(inName,"numFrames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numFrames() ); }
		if (HX_FIELD_EQ(inName,"getByName") ) { return ::hx::Val( getByName_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameIndex") ) { return ::hx::Val( frameIndex ); }
		if (HX_FIELD_EQ(inName,"addByNames") ) { return ::hx::Val( addByNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paused") ) { return ::hx::Val( get_paused_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paused") ) { return ::hx::Val( set_paused_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_frames") ) { return ::hx::Val( get_frames_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { return ::hx::Val( _animations ); }
		if (HX_FIELD_EQ(inName,"_prerotated") ) { return ::hx::Val( _prerotated ); }
		if (HX_FIELD_EQ(inName,"addByPrefix") ) { return ::hx::Val( addByPrefix_dyn() ); }
		if (HX_FIELD_EQ(inName,"randomFrame") ) { return ::hx::Val( randomFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNameList") ) { return ::hx::Val( getNameList_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_curAnim") ) { return ::hx::Val( get_curAnim_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_curAnim") ) { return ::hx::Val( set_curAnim_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addByIndices") ) { return ::hx::Val( addByIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"fireCallback") ) { return ::hx::Val( fireCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"findByPrefix") ) { return ::hx::Val( findByPrefix_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_finished") ) { return ::hx::Val( get_finished_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_finished") ) { return ::hx::Val( set_finished_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"appendByNames") ) { return ::hx::Val( appendByNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"byNamesHelper") ) { return ::hx::Val( byNamesHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_frameName") ) { return ::hx::Val( get_frameName_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frameName") ) { return ::hx::Val( set_frameName_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return ::hx::Val( get_numFrames_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFrameIndex") ) { return ::hx::Val( getFrameIndex_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { return ::hx::Val( finishCallback ); }
		if (HX_FIELD_EQ(inName,"appendByPrefix") ) { return ::hx::Val( appendByPrefix_dyn() ); }
		if (HX_FIELD_EQ(inName,"byPrefixHelper") ) { return ::hx::Val( byPrefixHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frameIndex") ) { return ::hx::Val( set_frameIndex_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clearPrerotated") ) { return ::hx::Val( clearPrerotated_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearAnimations") ) { return ::hx::Val( clearAnimations_dyn() ); }
		if (HX_FIELD_EQ(inName,"appendByIndices") ) { return ::hx::Val( appendByIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"findSpriteFrame") ) { return ::hx::Val( findSpriteFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"byIndicesHelper") ) { return ::hx::Val( byIndicesHelper_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createPrerotated") ) { return ::hx::Val( createPrerotated_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFrameDuration") ) { return ::hx::Val( getFrameDuration_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAnimationList") ) { return ::hx::Val( getAnimationList_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"followGlobalSpeed") ) { return ::hx::Val( followGlobalSpeed ); }
		if (HX_FIELD_EQ(inName,"destroyAnimations") ) { return ::hx::Val( destroyAnimations_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addByStringIndices") ) { return ::hx::Val( addByStringIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"fireFinishCallback") ) { return ::hx::Val( fireFinishCallback_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"appendByStringIndices") ) { return ::hx::Val( appendByStringIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"byStringIndicesHelper") ) { return ::hx::Val( byStringIndicesHelper_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxAnimationController_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"globalSpeed") ) { outValue = ( globalSpeed ); return true; }
	}
	return false;
}

::hx::Val FlxAnimationController_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_name(inValue.Cast< ::String >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paused(inValue.Cast< bool >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curAnim") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_curAnim(inValue.Cast<  ::flixel::animation::FlxAnimation >()) ); }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_finished(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curAnim") ) { _curAnim=inValue.Cast<  ::flixel::animation::FlxAnimation >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frameName(inValue.Cast< ::String >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frameIndex(inValue.Cast< int >()) );frameIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { _animations=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prerotated") ) { _prerotated=inValue.Cast<  ::flixel::animation::FlxPrerotatedAnimation >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"followGlobalSpeed") ) { followGlobalSpeed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxAnimationController_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"globalSpeed") ) { globalSpeed=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void FlxAnimationController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curAnim",b1,f7,86,ab));
	outFields->push(HX_("frameIndex",a5,cf,3a,a1));
	outFields->push(HX_("frameName",18,31,80,36));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("paused",ae,40,84,ef));
	outFields->push(HX_("finished",72,93,0e,95));
	outFields->push(HX_("numFrames",8c,fa,86,5d));
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("_sprite",a4,ed,0c,32));
	outFields->push(HX_("_curAnim",32,51,3f,e5));
	outFields->push(HX_("_animations",0e,02,a6,55));
	outFields->push(HX_("_prerotated",05,51,a3,64));
	outFields->push(HX_("followGlobalSpeed",33,f9,9a,92));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxAnimationController_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxAnimationController_obj,frameIndex),HX_("frameIndex",a5,cf,3a,a1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxAnimationController_obj,callback),HX_("callback",c5,99,06,7f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxAnimationController_obj,finishCallback),HX_("finishCallback",38,a1,bc,b4)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxAnimationController_obj,_sprite),HX_("_sprite",a4,ed,0c,32)},
	{::hx::fsObject /*  ::flixel::animation::FlxAnimation */ ,(int)offsetof(FlxAnimationController_obj,_curAnim),HX_("_curAnim",32,51,3f,e5)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(FlxAnimationController_obj,_animations),HX_("_animations",0e,02,a6,55)},
	{::hx::fsObject /*  ::flixel::animation::FlxPrerotatedAnimation */ ,(int)offsetof(FlxAnimationController_obj,_prerotated),HX_("_prerotated",05,51,a3,64)},
	{::hx::fsBool,(int)offsetof(FlxAnimationController_obj,followGlobalSpeed),HX_("followGlobalSpeed",33,f9,9a,92)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxAnimationController_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &FlxAnimationController_obj::globalSpeed,HX_("globalSpeed",24,ef,a7,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxAnimationController_obj_sMemberFields[] = {
	HX_("frameIndex",a5,cf,3a,a1),
	HX_("callback",c5,99,06,7f),
	HX_("finishCallback",38,a1,bc,b4),
	HX_("_sprite",a4,ed,0c,32),
	HX_("_curAnim",32,51,3f,e5),
	HX_("_animations",0e,02,a6,55),
	HX_("_prerotated",05,51,a3,64),
	HX_("followGlobalSpeed",33,f9,9a,92),
	HX_("update",09,86,05,87),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("createPrerotated",02,02,47,c7),
	HX_("destroyAnimations",89,22,77,d5),
	HX_("destroy",fa,2c,86,24),
	HX_("getFrameDuration",2b,62,8b,57),
	HX_("clearPrerotated",d3,4b,be,18),
	HX_("clearAnimations",dc,fc,c0,09),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("append",da,e1,d3,8f),
	HX_("addByNames",50,4a,a2,dd),
	HX_("appendByNames",b7,b3,38,af),
	HX_("addByStringIndices",de,f4,20,5c),
	HX_("appendByStringIndices",45,9d,e9,96),
	HX_("addByIndices",af,b3,3b,79),
	HX_("appendByIndices",d6,84,4c,ac),
	HX_("findSpriteFrame",2f,8a,2e,fe),
	HX_("addByPrefix",0a,56,9c,a1),
	HX_("appendByPrefix",c3,26,a2,33),
	HX_("play",f4,2d,5a,4a),
	HX_("reset",cf,49,c8,e6),
	HX_("finish",53,40,7f,86),
	HX_("stop",02,f0,5b,4c),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("reverse",22,39,fc,1a),
	HX_("getByName",f8,b4,a4,8a),
	HX_("randomFrame",2a,9b,18,71),
	HX_("fireCallback",9b,cf,9f,40),
	HX_("fireFinishCallback",8e,db,9c,e3),
	HX_("byNamesHelper",bf,fa,de,2f),
	HX_("byStringIndicesHelper",cd,4c,c0,21),
	HX_("byIndicesHelper",9e,6f,1b,71),
	HX_("byPrefixHelper",17,cd,67,83),
	HX_("findByPrefix",22,0c,be,5d),
	HX_("set_frameIndex",62,40,50,37),
	HX_("get_frameName",ef,04,e4,f7),
	HX_("set_frameName",fb,e6,e9,3c),
	HX_("get_name",d4,2d,ba,c8),
	HX_("set_name",48,87,17,77),
	HX_("getAnimationList",0c,b3,1f,a4),
	HX_("getNameList",ff,fe,2d,6a),
	HX_("exists",dc,1d,e0,bf),
	HX_("rename",7e,2b,27,05),
	HX_("get_curAnim",c8,57,81,31),
	HX_("set_curAnim",d4,5e,ee,3b),
	HX_("get_paused",77,b0,0b,e0),
	HX_("set_paused",eb,4e,89,e3),
	HX_("get_finished",7b,47,28,4a),
	HX_("set_finished",ef,6a,21,5f),
	HX_("get_frames",6f,1f,0d,9d),
	HX_("get_numFrames",63,ce,ea,1e),
	HX_("getFrameIndex",db,2b,ad,fd),
	::String(null()) };

static void FlxAnimationController_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAnimationController_obj::globalSpeed,"globalSpeed");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxAnimationController_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAnimationController_obj::globalSpeed,"globalSpeed");
};

#endif

::hx::Class FlxAnimationController_obj::__mClass;

static ::String FlxAnimationController_obj_sStaticFields[] = {
	HX_("globalSpeed",24,ef,a7,59),
	::String(null())
};

void FlxAnimationController_obj::__register()
{
	FlxAnimationController_obj _hx_dummy;
	FlxAnimationController_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.animation.FlxAnimationController",0a,0a,da,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAnimationController_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxAnimationController_obj::__SetStatic;
	__mClass->mMarkFunc = FlxAnimationController_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxAnimationController_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxAnimationController_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxAnimationController_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxAnimationController_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAnimationController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAnimationController_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxAnimationController_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_89_boot)
HXDLIN(  89)		globalSpeed = ((Float)1);
            	}
}

} // end namespace flixel
} // end namespace animation
