#ifndef INCLUDED_flixel_addons_ui_FlxUICursor
#define INCLUDED_flixel_addons_ui_FlxUICursor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,Anchor)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxBaseMultiInput)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUI)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICursor)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIMouse)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS3(flixel,addons,ui,GamepadAutoConnectPreference)
HX_DECLARE_CLASS3(flixel,addons,ui,SortMethod)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouse)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUICursor_obj : public  ::flixel::addons::ui::FlxUISprite_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxUISprite_obj super;
		typedef FlxUICursor_obj OBJ_;
		FlxUICursor_obj();

	public:
		enum { _hx_ClassId = 0x46137299 };

		void __construct( ::Dynamic Callback,::hx::Null< int >  __o_InputMethod,::hx::Null< int >  __o_DefaultKeys, ::Dynamic Asset);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUICursor")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUICursor"); }
		static ::hx::ObjectPtr< FlxUICursor_obj > __new( ::Dynamic Callback,::hx::Null< int >  __o_InputMethod,::hx::Null< int >  __o_DefaultKeys, ::Dynamic Asset);
		static ::hx::ObjectPtr< FlxUICursor_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic Callback,::hx::Null< int >  __o_InputMethod,::hx::Null< int >  __o_DefaultKeys, ::Dynamic Asset);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUICursor_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxUICursor",9c,e2,40,8a); }

		static void __boot();
		static int KEYS_TAB;
		static int KEYS_WASD;
		static int KEYS_ARROWS;
		static int KEYS_NUMPAD;
		static int GAMEPAD_DPAD;
		static int GAMEPAD_LEFT_STICK;
		static int GAMEPAD_RIGHT_STICK;
		static int GAMEPAD_SHOULDER_BUTTONS;
		static int INPUT_NONE;
		static int INPUT_KEYS;
		static int INPUT_GAMEPAD;
		 ::Dynamic callback;
		Dynamic callback_dyn() { return callback;}
		bool wrap;
		int location;
		int listIndex;
		bool ignoreNextInput;
		void findVisibleLocation(int loc,::hx::Null< bool >  forwardIfInvisible,::hx::Null< bool >  wrap);
		::Dynamic findVisibleLocation_dyn();

		::Dynamic getCurrentWidget();
		::Dynamic getCurrentWidget_dyn();

		int set_listIndex(int i);
		::Dynamic set_listIndex_dyn();

		bool set_visible(bool b);

		int set_location(int i);
		::Dynamic set_location_dyn();

		 ::flixel::addons::ui::GamepadAutoConnectPreference gamepadAutoConnect;
		 ::flixel::input::gamepad::FlxGamepad set_gamepad( ::flixel::input::gamepad::FlxGamepad g);
		::Dynamic set_gamepad_dyn();

		 ::flixel::input::gamepad::FlxGamepad get_gamepad();
		::Dynamic get_gamepad_dyn();

		 ::flixel::input::gamepad::FlxGamepad _gamepad;
		::Array< ::Dynamic> keysUp;
		::Array< ::Dynamic> keysDown;
		::Array< ::Dynamic> keysLeft;
		::Array< ::Dynamic> keysRight;
		::Array< ::Dynamic> keysClick;
		 ::flixel::addons::ui::Anchor anchor;
		bool dispatchEvents;
		int inputMethod;
		void destroy();

		void update(Float elapsed);

		void addWidgetsFromUI( ::flixel::addons::ui::FlxUI ui);
		::Dynamic addWidgetsFromUI_dyn();

		bool jumpTo(::Dynamic widget);
		::Dynamic jumpTo_dyn();

		bool jumpToXY(Float X,Float Y);
		::Dynamic jumpToXY_dyn();

		void addWidgetList(::Array< ::Dynamic> list);
		::Dynamic addWidgetList_dyn();

		void addWidget(::Dynamic widget);
		::Dynamic addWidget_dyn();

		void sortWidgets( ::flixel::addons::ui::SortMethod method,::Array< ::Dynamic> list);
		::Dynamic sortWidgets_dyn();

		void clearWidgets();
		::Dynamic clearWidgets_dyn();

		bool removeWidget(::Dynamic widget,::Array< ::Dynamic> list);
		::Dynamic removeWidget_dyn();

		void setDefaultKeys(int code);
		::Dynamic setDefaultKeys_dyn();

		::Array< ::Dynamic> _lists;
		::Array< ::Dynamic> _widgets;
		 ::flixel::addons::ui::FlxUIMouse _newMouse;
		Float lastMouseX;
		Float lastMouseY;
		bool _clickPressed;
		int _defaultCode;
		 ::flixel::addons::ui::Anchor _rightAnchor;
		 ::flixel::addons::ui::Anchor _topAnchor;
		 ::flixel::addons::ui::Anchor _leftAnchor;
		 ::flixel::addons::ui::Anchor _bottomAnchor;
		Float _clickTime;
		 ::flixel::input::gamepad::FlxGamepad getGamepad(::hx::Null< bool >  exhaustive);
		::Dynamic getGamepad_dyn();

		int _sortIDVisible(::Dynamic a,::Dynamic b);
		::Dynamic _sortIDVisible_dyn();

		int _sortXYWidgetList( ::Dynamic a, ::Dynamic b);
		::Dynamic _sortXYWidgetList_dyn();

		int _sortXYVisible(::Dynamic a,::Dynamic b);
		::Dynamic _sortXYVisible_dyn();

		void _addToKeys(::Array< ::Dynamic> keys, ::flixel::addons::ui::FlxBaseMultiInput m);
		::Dynamic _addToKeys_dyn();

		void _clearKeys();
		::Dynamic _clearKeys_dyn();

		void _newKeys();
		::Dynamic _newKeys_dyn();

		void _checkKeys();
		::Dynamic _checkKeys_dyn();

		bool _clickKeysJustPressed();
		::Dynamic _clickKeysJustPressed_dyn();

		bool _clickKeysPressed();
		::Dynamic _clickKeysPressed_dyn();

		 ::flixel::math::FlxBasePoint _getWidgetPoint( ::flixel::FlxCamera Camera);
		::Dynamic _getWidgetPoint_dyn();

		void _doMouseMove( ::flixel::math::FlxBasePoint pt);
		::Dynamic _doMouseMove_dyn();

		void _doPress( ::flixel::math::FlxBasePoint pt);
		::Dynamic _doPress_dyn();

		void _doRelease( ::flixel::math::FlxBasePoint pt);
		::Dynamic _doRelease_dyn();

		int _findNextY(int Y,int indexValue,::Array< ::Dynamic> listWidget,::Array< ::Dynamic> listLists);
		::Dynamic _findNextY_dyn();

		int _wrapX(int X,int indexValue,int listLength);
		::Dynamic _wrapX_dyn();

		int _wrapY(int Y,int indexValue,::Array< ::Dynamic> listWidget,::Array< ::Dynamic> listLists);
		::Dynamic _wrapY_dyn();

		void _doInput(int X,int Y,::hx::Null< int >  recursion);
		::Dynamic _doInput_dyn();

		void _updateCursor();
		::Dynamic _updateCursor_dyn();

		void _flipAnchor(::String AnchorDir, ::flixel::FlxObject destination);
		::Dynamic _flipAnchor_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUICursor */ 
