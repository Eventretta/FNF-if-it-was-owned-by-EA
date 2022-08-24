#ifndef INCLUDED_polymod_backends_PolymodAssetLibrary
#define INCLUDED_polymod_backends_PolymodAssetLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(polymod,backends,IBackend)
HX_DECLARE_CLASS2(polymod,backends,PolymodAssetLibrary)
HX_DECLARE_CLASS2(polymod,format,ParseRules)
HX_DECLARE_CLASS2(polymod,fs,IFileSystem)

namespace polymod{
namespace backends{


class HXCPP_CLASS_ATTRIBUTES PolymodAssetLibrary_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PolymodAssetLibrary_obj OBJ_;
		PolymodAssetLibrary_obj();

	public:
		enum { _hx_ClassId = 0x6eaea9ac };

		void __construct( ::Dynamic params);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.backends.PolymodAssetLibrary")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.backends.PolymodAssetLibrary"); }
		static ::hx::ObjectPtr< PolymodAssetLibrary_obj > __new( ::Dynamic params);
		static ::hx::ObjectPtr< PolymodAssetLibrary_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic params);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PolymodAssetLibrary_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PolymodAssetLibrary",e1,6f,5a,31); }

		::Dynamic backend;
		::Dynamic fileSystem;
		 ::haxe::ds::StringMap type;
		::Array< ::String > dirs;
		::Array< ::String > ignoredFiles;
		 ::polymod::format::ParseRules parseRules;
		 ::haxe::ds::StringMap extensions;
		void destroy();
		::Dynamic destroy_dyn();

		::String mergeAndAppendText(::String id,::String modText);
		::Dynamic mergeAndAppendText_dyn();

		::String getExtensionType(::String ext);
		::Dynamic getExtensionType_dyn();

		::String getTextDirectly(::String id,::String directory);
		::Dynamic getTextDirectly_dyn();

		bool exists(::String id);
		::Dynamic exists_dyn();

		::String getText(::String id);
		::Dynamic getText_dyn();

		 ::haxe::io::Bytes getBytes(::String id);
		::Dynamic getBytes_dyn();

		::String getPath(::String id);
		::Dynamic getPath_dyn();

		void clearCache();
		::Dynamic clearCache_dyn();

		::Array< ::String > list(::String type);
		::Dynamic list_dyn();

		::Array< ::String > listModFiles(::String type);
		::Dynamic listModFiles_dyn();

		bool check(::String id,::String type);
		::Dynamic check_dyn();

		::String getType(::String id);
		::Dynamic getType_dyn();

		bool checkDirectly(::String id,::String dir);
		::Dynamic checkDirectly_dyn();

		::String file(::String id,::String theDir);
		::Dynamic file_dyn();

		::String fileLocale(::String id);
		::Dynamic fileLocale_dyn();

		bool _checkExists(::String id);
		::Dynamic _checkExists_dyn();

		void init();
		::Dynamic init_dyn();

		void initExtensions();
		::Dynamic initExtensions_dyn();

		void _extensionSet(::String str,::String type);
		::Dynamic _extensionSet_dyn();

		void initMod(::String d);
		::Dynamic initMod_dyn();

};

} // end namespace polymod
} // end namespace backends

#endif /* INCLUDED_polymod_backends_PolymodAssetLibrary */ 
