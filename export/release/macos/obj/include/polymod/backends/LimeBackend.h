#ifndef INCLUDED_polymod_backends_LimeBackend
#define INCLUDED_polymod_backends_LimeBackend

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_polymod_backends_IBackend
#include <polymod/backends/IBackend.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS2(polymod,backends,IBackend)
HX_DECLARE_CLASS2(polymod,backends,LimeBackend)
HX_DECLARE_CLASS2(polymod,backends,LimeModLibrary)
HX_DECLARE_CLASS2(polymod,backends,PolymodAssetLibrary)

namespace polymod{
namespace backends{


class HXCPP_CLASS_ATTRIBUTES LimeBackend_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LimeBackend_obj OBJ_;
		LimeBackend_obj();

	public:
		enum { _hx_ClassId = 0x7a28a88e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.backends.LimeBackend")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.backends.LimeBackend"); }
		static ::hx::ObjectPtr< LimeBackend_obj > __new();
		static ::hx::ObjectPtr< LimeBackend_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LimeBackend_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("LimeBackend",5f,a1,1c,4b); }

		static  ::haxe::ds::StringMap defaultAssetLibraries;
		static  ::haxe::ds::StringMap getDefaultAssetLibraries();
		static ::Dynamic getDefaultAssetLibraries_dyn();

		static void restoreDefaultAssetLibraries();
		static ::Dynamic restoreDefaultAssetLibraries_dyn();

		 ::polymod::backends::PolymodAssetLibrary polymodLibrary;
		 ::haxe::ds::StringMap modLibraries;
		bool init( ::Dynamic params);
		::Dynamic init_dyn();

		 ::polymod::backends::LimeModLibrary getModLibrary( ::lime::utils::AssetLibrary fallbackLibrary,::String pathPrefix);
		::Dynamic getModLibrary_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		bool exists(::String id);
		::Dynamic exists_dyn();

		 ::haxe::io::Bytes getBytes(::String id);
		::Dynamic getBytes_dyn();

		::String getText(::String id);
		::Dynamic getText_dyn();

		::String getPath(::String id);
		::Dynamic getPath_dyn();

		::Array< ::String > list(::String type);
		::Dynamic list_dyn();

		virtual void clearCache();
		::Dynamic clearCache_dyn();

		::String stripAssetsPrefix(::String id);
		::Dynamic stripAssetsPrefix_dyn();

};

} // end namespace polymod
} // end namespace backends

#endif /* INCLUDED_polymod_backends_LimeBackend */ 
