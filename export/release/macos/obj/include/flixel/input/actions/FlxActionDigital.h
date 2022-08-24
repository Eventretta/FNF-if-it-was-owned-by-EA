#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#define INCLUDED_flixel_input_actions_FlxActionDigital

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxAction)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionDigital)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputDigital)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxActionDigital_obj : public  ::flixel::input::actions::FlxAction_obj
{
	public:
		typedef  ::flixel::input::actions::FlxAction_obj super;
		typedef FlxActionDigital_obj OBJ_;
		FlxActionDigital_obj();

	public:
		enum { _hx_ClassId = 0x53d9a55f };

		void __construct(::String __o_Name, ::Dynamic Callback);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxActionDigital")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxActionDigital"); }
		static ::hx::ObjectPtr< FlxActionDigital_obj > __new(::String __o_Name, ::Dynamic Callback);
		static ::hx::ObjectPtr< FlxActionDigital_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_Name, ::Dynamic Callback);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxActionDigital_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxActionDigital",10,3f,58,9e); }

		 ::Dynamic callback;
		Dynamic callback_dyn() { return callback;}
		 ::flixel::input::actions::FlxActionDigital add( ::flixel::input::actions::FlxActionInputDigital input);
		::Dynamic add_dyn();

		 ::flixel::input::actions::FlxActionDigital addInput(::Dynamic Input,int Trigger);
		::Dynamic addInput_dyn();

		 ::flixel::input::actions::FlxActionDigital addGamepad(int InputID,int Trigger,::hx::Null< int >  GamepadID);
		::Dynamic addGamepad_dyn();

		 ::flixel::input::actions::FlxActionDigital addKey(int Key,int Trigger);
		::Dynamic addKey_dyn();

		 ::flixel::input::actions::FlxActionDigital addMouse(int ButtonID,int Trigger);
		::Dynamic addMouse_dyn();

		 ::flixel::input::actions::FlxActionDigital addMouseWheel(bool Positive,int Trigger);
		::Dynamic addMouseWheel_dyn();

		void destroy();

		bool check();

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxActionDigital */ 
