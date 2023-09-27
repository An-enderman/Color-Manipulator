#ifndef INCLUDED_ManipulateColorsState
#define INCLUDED_ManipulateColorsState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(ManipulateColorsState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIButton)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUINumericStepper)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITabMenu)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES ManipulateColorsState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef ManipulateColorsState_obj OBJ_;
		ManipulateColorsState_obj();

	public:
		enum { _hx_ClassId = 0x399da423 };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ManipulateColorsState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ManipulateColorsState"); }
		static ::hx::ObjectPtr< ManipulateColorsState_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< ManipulateColorsState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ManipulateColorsState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ManipulateColorsState",c7,c2,97,6c); }

		 ::flixel::FlxSprite background;
		 ::flixel::addons::ui::FlxUITabMenu tabMenu;
		::Array< ::Dynamic> LabAndNames;
		int backgroundcolor;
		 ::flixel::addons::ui::FlxUIButton backbutton;
		 ::flixel::addons::ui::FlxUIInputText colorsave;
		void create();

		::String oldcolorimput;
		::String oldcolorimput2;
		 ::Dynamic color1;
		 ::Dynamic color2;
		int color1_ARGB;
		int color2_ARGB;
		int pre_result;
		::String colors;
		::Array< int > color_storage;
		int result;
		 ::flixel::FlxSprite colorbar1;
		 ::flixel::FlxSprite colorbar2;
		::Array< int > result_storage;
		 ::flixel::FlxSprite resultsquare;
		::Array< int > colorarray;
		 ::flixel::addons::ui::FlxUIButton mixbutton;
		 ::flixel::addons::ui::FlxUIText result_text;
		 ::Dynamic transformer;
		int color_temp_storage;
		int common_stepsize;
		 ::flixel::addons::ui::FlxUINumericStepper stepper_r1;
		 ::flixel::addons::ui::FlxUINumericStepper stepper_g1;
		 ::flixel::addons::ui::FlxUINumericStepper stepper_b1;
		 ::flixel::addons::ui::FlxUINumericStepper stepper_r2;
		 ::flixel::addons::ui::FlxUINumericStepper stepper_g2;
		 ::flixel::addons::ui::FlxUINumericStepper stepper_b2;
		void addColorMixerUI();
		::Dynamic addColorMixerUI_dyn();

		void update(Float elapsed);

};


#endif /* INCLUDED_ManipulateColorsState */ 
