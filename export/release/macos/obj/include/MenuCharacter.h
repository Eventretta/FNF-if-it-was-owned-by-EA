#ifndef INCLUDED_MenuCharacter
#define INCLUDED_MenuCharacter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(MenuCharacter)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)



class HXCPP_CLASS_ATTRIBUTES MenuCharacter_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef MenuCharacter_obj OBJ_;
		MenuCharacter_obj();

	public:
		enum { _hx_ClassId = 0x5962df7e };

		void __construct(int x,int y,Float scale,bool flipped);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="MenuCharacter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"MenuCharacter"); }
		static ::hx::ObjectPtr< MenuCharacter_obj > __new(int x,int y,Float scale,bool flipped);
		static ::hx::ObjectPtr< MenuCharacter_obj > __alloc(::hx::Ctx *_hx_ctx,int x,int y,Float scale,bool flipped);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MenuCharacter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MenuCharacter",ea,99,ab,10); }

		static void __boot();
		static  ::haxe::ds::StringMap settings;
		bool flipped;
		void setCharacter(::String character);
		::Dynamic setCharacter_dyn();

};


#endif /* INCLUDED_MenuCharacter */ 
