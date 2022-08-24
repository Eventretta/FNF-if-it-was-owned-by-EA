#ifndef INCLUDED_ScrollSpeedOption
#define INCLUDED_ScrollSpeedOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_aba31ccdfcd6978a_219_new)
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(ScrollSpeedOption)



class HXCPP_CLASS_ATTRIBUTES ScrollSpeedOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef ScrollSpeedOption_obj OBJ_;
		ScrollSpeedOption_obj();

	public:
		enum { _hx_ClassId = 0x08bb846f };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ScrollSpeedOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ScrollSpeedOption"); }

		inline static ::hx::ObjectPtr< ScrollSpeedOption_obj > __new(::String desc) {
			::hx::ObjectPtr< ScrollSpeedOption_obj > __this = new ScrollSpeedOption_obj();
			__this->__construct(desc);
			return __this;
		}

		inline static ::hx::ObjectPtr< ScrollSpeedOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc) {
			ScrollSpeedOption_obj *__this = (ScrollSpeedOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollSpeedOption_obj), true, "ScrollSpeedOption"));
			*(void **)__this = ScrollSpeedOption_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_aba31ccdfcd6978a_219_new)
HXLINE( 220)		__this->super::__construct();
HXLINE( 221)		( ( ::Option)(__this) )->description = desc;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScrollSpeedOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScrollSpeedOption",2f,cf,20,b9); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_ScrollSpeedOption */ 
