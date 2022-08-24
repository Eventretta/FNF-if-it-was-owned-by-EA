#ifndef INCLUDED_Song
#define INCLUDED_Song

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_4e288e2989890fc6_23_new)
HX_DECLARE_CLASS0(Song)



class HXCPP_CLASS_ATTRIBUTES Song_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Song_obj OBJ_;
		Song_obj();

	public:
		enum { _hx_ClassId = 0x0b844619 };

		void __construct(::String song,::Array< ::Dynamic> notes,int bpm);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Song")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Song"); }

		inline static ::hx::ObjectPtr< Song_obj > __new(::String song,::Array< ::Dynamic> notes,int bpm) {
			::hx::ObjectPtr< Song_obj > __this = new Song_obj();
			__this->__construct(song,notes,bpm);
			return __this;
		}

		inline static ::hx::ObjectPtr< Song_obj > __alloc(::hx::Ctx *_hx_ctx,::String song,::Array< ::Dynamic> notes,int bpm) {
			Song_obj *__this = (Song_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Song_obj), true, "Song"));
			*(void **)__this = Song_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_4e288e2989890fc6_23_new)
HXLINE(  32)		( ( ::Song)(__this) )->player2 = HX_("dad",47,36,4c,00);
HXLINE(  31)		( ( ::Song)(__this) )->player1 = HX_("bf",c4,55,00,00);
HXLINE(  29)		( ( ::Song)(__this) )->speed = ((Float)1);
HXLINE(  28)		( ( ::Song)(__this) )->needsVoices = true;
HXLINE(  36)		( ( ::Song)(__this) )->song = song;
HXLINE(  37)		( ( ::Song)(__this) )->notes = notes;
HXLINE(  38)		( ( ::Song)(__this) )->bpm = bpm;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Song_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Song",f5,4f,31,37); }

		static  ::Dynamic loadFromJson(::String jsonInput,::String folder);
		static ::Dynamic loadFromJson_dyn();

		static  ::Dynamic parseJSONshit(::String rawJson);
		static ::Dynamic parseJSONshit_dyn();

		::String song;
		::Array< ::Dynamic> notes;
		int bpm;
		bool needsVoices;
		Float speed;
		::String player1;
		::String player2;
};


#endif /* INCLUDED_Song */ 
