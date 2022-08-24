#ifndef INCLUDED_io_newgrounds_utils_AsyncNGCall
#define INCLUDED_io_newgrounds_utils_AsyncNGCall

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(io,newgrounds,NGLite)
HX_DECLARE_CLASS3(io,newgrounds,utils,AsyncNGCall)

namespace io{
namespace newgrounds{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES AsyncNGCall_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AsyncNGCall_obj OBJ_;
		AsyncNGCall_obj();

	public:
		enum { _hx_ClassId = 0x4e4effd4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="io.newgrounds.utils.AsyncNGCall")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"io.newgrounds.utils.AsyncNGCall"); }

		inline static ::hx::ObjectPtr< AsyncNGCall_obj > __new() {
			::hx::ObjectPtr< AsyncNGCall_obj > __this = new AsyncNGCall_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AsyncNGCall_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AsyncNGCall_obj *__this = (AsyncNGCall_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AsyncNGCall_obj), false, "io.newgrounds.utils.AsyncNGCall"));
			*(void **)__this = AsyncNGCall_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AsyncNGCall_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AsyncNGCall",93,45,5e,b4); }

		static void __boot();
		static ::String PATH;
		static void send( ::io::newgrounds::NGLite core,::String data, ::Dynamic onData, ::Dynamic onError, ::Dynamic onStatus);
		static ::Dynamic send_dyn();

};

} // end namespace io
} // end namespace newgrounds
} // end namespace utils

#endif /* INCLUDED_io_newgrounds_utils_AsyncNGCall */ 
