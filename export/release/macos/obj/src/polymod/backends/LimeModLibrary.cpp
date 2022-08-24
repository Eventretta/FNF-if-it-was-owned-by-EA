#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_String
#include <lime/net/_HTTPRequest_String.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_PolymodConfig
#include <polymod/PolymodConfig.h>
#endif
#ifndef INCLUDED_polymod_backends_IBackend
#include <polymod/backends/IBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_LimeBackend
#include <polymod/backends/LimeBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_LimeModLibrary
#include <polymod/backends/LimeModLibrary.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssetLibrary
#include <polymod/backends/PolymodAssetLibrary.h>
#endif
#ifndef INCLUDED_polymod_fs_IFileSystem
#include <polymod/fs/IFileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_83234c3e57483dca_313_new,"polymod.backends.LimeModLibrary","new",0x1dcd2097,"polymod.backends.LimeModLibrary.new","polymod/backends/LimeBackend.hx",313,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_323_destroy,"polymod.backends.LimeModLibrary","destroy",0xabf164b1,"polymod.backends.LimeModLibrary.destroy","polymod/backends/LimeBackend.hx",323,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_331_getAsset,"polymod.backends.LimeModLibrary","getAsset",0x7c7601e3,"polymod.backends.LimeModLibrary.getAsset","polymod/backends/LimeBackend.hx",331,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_361_exists,"polymod.backends.LimeModLibrary","exists",0x99738a05,"polymod.backends.LimeModLibrary.exists","polymod/backends/LimeBackend.hx",361,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_394_existsDefault,"polymod.backends.LimeModLibrary","existsDefault",0x8382f13c,"polymod.backends.LimeModLibrary.existsDefault","polymod/backends/LimeBackend.hx",394,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_398_getAudioBuffer,"polymod.backends.LimeModLibrary","getAudioBuffer",0xec6c7ea9,"polymod.backends.LimeModLibrary.getAudioBuffer","polymod/backends/LimeBackend.hx",398,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_416_getBytes,"polymod.backends.LimeModLibrary","getBytes",0x13d4a05e,"polymod.backends.LimeModLibrary.getBytes","polymod/backends/LimeBackend.hx",416,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_435_getFont,"polymod.backends.LimeModLibrary","getFont",0x9dae453c,"polymod.backends.LimeModLibrary.getFont","polymod/backends/LimeBackend.hx",435,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_453_getImage,"polymod.backends.LimeModLibrary","getImage",0x13a5b74e,"polymod.backends.LimeModLibrary.getImage","polymod/backends/LimeBackend.hx",453,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_471_getPath,"polymod.backends.LimeModLibrary","getPath",0xa43fcd12,"polymod.backends.LimeModLibrary.getPath","polymod/backends/LimeBackend.hx",471,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_489_getText,"polymod.backends.LimeModLibrary","getText",0xa6e7b41a,"polymod.backends.LimeModLibrary.getText","polymod/backends/LimeBackend.hx",489,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_515_loadBytes,"polymod.backends.LimeModLibrary","loadBytes",0x7b4127dc,"polymod.backends.LimeModLibrary.loadBytes","polymod/backends/LimeBackend.hx",515,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_533_loadFont,"polymod.backends.LimeModLibrary","loadFont",0xaac5b77e,"polymod.backends.LimeModLibrary.loadFont","polymod/backends/LimeBackend.hx",533,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_559_loadImage,"polymod.backends.LimeModLibrary","loadImage",0x7b123ecc,"polymod.backends.LimeModLibrary.loadImage","polymod/backends/LimeBackend.hx",559,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_578_loadAudioBuffer,"polymod.backends.LimeModLibrary","loadAudioBuffer",0xf608b8a7,"polymod.backends.LimeModLibrary.loadAudioBuffer","polymod/backends/LimeBackend.hx",578,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_603_loadText,"polymod.backends.LimeModLibrary","loadText",0xb3ff265c,"polymod.backends.LimeModLibrary.loadText","polymod/backends/LimeBackend.hx",603,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_623_isLocal,"polymod.backends.LimeModLibrary","isLocal",0x9ce1a4d8,"polymod.backends.LimeModLibrary.isLocal","polymod/backends/LimeBackend.hx",623,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_641_list,"polymod.backends.LimeModLibrary","list",0xf45ffc47,"polymod.backends.LimeModLibrary.list","polymod/backends/LimeBackend.hx",641,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_273_LimeToPoly,"polymod.backends.LimeModLibrary","LimeToPoly",0x9363ab25,"polymod.backends.LimeModLibrary.LimeToPoly","polymod/backends/LimeBackend.hx",273,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_289_PolyToLime,"polymod.backends.LimeModLibrary","PolyToLime",0x8a076e65,"polymod.backends.LimeModLibrary.PolyToLime","polymod/backends/LimeBackend.hx",289,0xcff7dfd6)
namespace polymod{
namespace backends{

void LimeModLibrary_obj::__construct( ::polymod::backends::LimeBackend backend, ::lime::utils::AssetLibrary fallback,::String __o_pathPrefix){
            		::String pathPrefix = __o_pathPrefix;
            		if (::hx::IsNull(__o_pathPrefix)) pathPrefix = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_313_new)
HXLINE( 314)		this->b = backend;
HXLINE( 315)		this->p = this->b->polymodLibrary;
HXLINE( 316)		this->pathPrefix = pathPrefix;
HXLINE( 317)		this->fallback = fallback;
HXLINE( 318)		this->hasFallback = ::hx::IsNotNull( this->fallback );
HXLINE( 319)		super::__construct();
            	}

Dynamic LimeModLibrary_obj::__CreateEmpty() { return new LimeModLibrary_obj; }

void *LimeModLibrary_obj::_hx_vtable = 0;

Dynamic LimeModLibrary_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LimeModLibrary_obj > _hx_result = new LimeModLibrary_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool LimeModLibrary_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25654723) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25654723;
	} else {
		return inClassId==(int)0x333eca03;
	}
}

void LimeModLibrary_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_323_destroy)
HXLINE( 324)		this->b = null();
HXLINE( 325)		this->p = null();
HXLINE( 326)		this->fallback = null();
HXLINE( 327)		this->type = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LimeModLibrary_obj,destroy,(void))

 ::Dynamic LimeModLibrary_obj::getAsset(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_331_getAsset)
HXLINE( 332)		if ((type == HX_("TEXT",ad,94,ba,37))) {
HXLINE( 333)			return this->getText(id);
            		}
HXLINE( 335)		::String symbol_modId;
HXDLIN( 335)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 335)		::String id1 = id;
HXDLIN( 335)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 335)		::String symbol_fallbackId = id1;
HXDLIN( 335)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 335)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 335)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 335)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 335)		bool _hx_tmp;
HXDLIN( 335)		bool _hx_tmp1;
HXDLIN( 335)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 335)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 335)			_hx_tmp1 = false;
            		}
HXDLIN( 335)		if (_hx_tmp1) {
HXLINE( 335)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 335)			_hx_tmp = false;
            		}
HXDLIN( 335)		if (_hx_tmp) {
HXLINE( 335)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 335)		symbol_modId = symbol_nakedId;
HXLINE( 338)		 ::polymod::backends::PolymodAssetLibrary _hx_tmp2 = this->p;
HXDLIN( 338)		if (_hx_tmp2->check(symbol_modId,::polymod::backends::LimeModLibrary_obj::LimeToPoly(type))) {
HXLINE( 341)			return this->super::getAsset(id,type);
            		}
            		else {
HXLINE( 343)			if (this->hasFallback) {
HXLINE( 346)				::String localePath = this->p->fileLocale(id);
HXLINE( 347)				if (this->fallback->exists(localePath,null())) {
HXLINE( 348)					return this->fallback->getAsset(localePath,type);
            				}
            				else {
HXLINE( 350)					return this->fallback->getAsset(id,type);
            				}
            			}
            		}
HXLINE( 353)		return null();
            	}


bool LimeModLibrary_obj::exists(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_361_exists)
HXLINE( 362)		::String symbol_modId;
HXDLIN( 362)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 362)		::String id1 = id;
HXDLIN( 362)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 362)		::String symbol_fallbackId = id1;
HXDLIN( 362)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 362)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 362)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 362)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 362)		bool _hx_tmp;
HXDLIN( 362)		bool _hx_tmp1;
HXDLIN( 362)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 362)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 362)			_hx_tmp1 = false;
            		}
HXDLIN( 362)		if (_hx_tmp1) {
HXLINE( 362)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 362)			_hx_tmp = false;
            		}
HXDLIN( 362)		if (_hx_tmp) {
HXLINE( 362)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 362)		symbol_modId = symbol_nakedId;
HXLINE( 363)		 ::polymod::backends::PolymodAssetLibrary _hx_tmp2 = this->p;
HXDLIN( 363)		if (_hx_tmp2->check(symbol_modId,::polymod::backends::LimeModLibrary_obj::LimeToPoly(type))) {
HXLINE( 366)			return true;
            		}
            		else {
HXLINE( 368)			if (this->hasFallback) {
HXLINE( 371)				return this->existsDefault(id,type);
            			}
            		}
HXLINE( 374)		return false;
            	}


bool LimeModLibrary_obj::existsDefault(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_394_existsDefault)
HXDLIN( 394)		return this->fallback->exists(id,type);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LimeModLibrary_obj,existsDefault,return )

 ::lime::media::AudioBuffer LimeModLibrary_obj::getAudioBuffer(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_398_getAudioBuffer)
HXLINE( 399)		::String symbol_modId;
HXDLIN( 399)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 399)		::String id1 = id;
HXDLIN( 399)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 399)		::String symbol_fallbackId = id1;
HXDLIN( 399)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 399)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 399)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 399)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 399)		bool _hx_tmp;
HXDLIN( 399)		bool _hx_tmp1;
HXDLIN( 399)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 399)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 399)			_hx_tmp1 = false;
            		}
HXDLIN( 399)		if (_hx_tmp1) {
HXLINE( 399)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 399)			_hx_tmp = false;
            		}
HXDLIN( 399)		if (_hx_tmp) {
HXLINE( 399)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 399)		symbol_modId = symbol_nakedId;
HXLINE( 400)		if (this->p->check(symbol_modId,null())) {
HXLINE( 402)			::Dynamic _hx_tmp = this->p->fileSystem;
HXDLIN( 402)			return ::lime::media::AudioBuffer_obj::fromBytes(::polymod::fs::IFileSystem_obj::getFileBytes(_hx_tmp,this->p->file(symbol_modId,null())));
            		}
            		else {
HXLINE( 404)			if (this->hasFallback) {
HXLINE( 406)				::String localePath = this->p->fileLocale(id);
HXLINE( 407)				if (this->fallback->exists(localePath,null())) {
HXLINE( 408)					return this->fallback->getAudioBuffer(localePath);
            				}
            				else {
HXLINE( 410)					return this->fallback->getAudioBuffer(id);
            				}
            			}
            		}
HXLINE( 412)		return null();
            	}


 ::haxe::io::Bytes LimeModLibrary_obj::getBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_416_getBytes)
HXLINE( 417)		::String symbol_modId;
HXDLIN( 417)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 417)		::String id1 = id;
HXDLIN( 417)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 417)		::String symbol_fallbackId = id1;
HXDLIN( 417)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 417)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 417)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 417)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 417)		bool _hx_tmp;
HXDLIN( 417)		bool _hx_tmp1;
HXDLIN( 417)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 417)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 417)			_hx_tmp1 = false;
            		}
HXDLIN( 417)		if (_hx_tmp1) {
HXLINE( 417)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 417)			_hx_tmp = false;
            		}
HXDLIN( 417)		if (_hx_tmp) {
HXLINE( 417)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 417)		symbol_modId = symbol_nakedId;
HXLINE( 418)		::String file = this->p->file(symbol_modId,null());
HXLINE( 419)		if (this->p->check(symbol_modId,null())) {
HXLINE( 421)			::Dynamic _hx_tmp = this->p->fileSystem;
HXDLIN( 421)			return ::polymod::fs::IFileSystem_obj::getFileBytes(_hx_tmp,this->p->file(symbol_modId,null()));
            		}
            		else {
HXLINE( 423)			if (this->hasFallback) {
HXLINE( 425)				::String localePath = this->p->fileLocale(id);
HXLINE( 426)				if (this->fallback->exists(localePath,null())) {
HXLINE( 427)					return this->fallback->getBytes(localePath);
            				}
            				else {
HXLINE( 429)					return this->fallback->getBytes(id);
            				}
            			}
            		}
HXLINE( 431)		return null();
            	}


 ::lime::text::Font LimeModLibrary_obj::getFont(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_435_getFont)
HXLINE( 436)		::String symbol_modId;
HXDLIN( 436)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 436)		::String id1 = id;
HXDLIN( 436)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 436)		::String symbol_fallbackId = id1;
HXDLIN( 436)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 436)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 436)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 436)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 436)		bool _hx_tmp;
HXDLIN( 436)		bool _hx_tmp1;
HXDLIN( 436)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 436)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 436)			_hx_tmp1 = false;
            		}
HXDLIN( 436)		if (_hx_tmp1) {
HXLINE( 436)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 436)			_hx_tmp = false;
            		}
HXDLIN( 436)		if (_hx_tmp) {
HXLINE( 436)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 436)		symbol_modId = symbol_nakedId;
HXLINE( 437)		if (this->p->check(symbol_modId,null())) {
HXLINE( 439)			::Dynamic _hx_tmp = this->p->fileSystem;
HXDLIN( 439)			return ::lime::text::Font_obj::fromBytes(::polymod::fs::IFileSystem_obj::getFileBytes(_hx_tmp,this->p->file(symbol_modId,null())));
            		}
            		else {
HXLINE( 441)			if (this->hasFallback) {
HXLINE( 443)				::String localePath = this->p->fileLocale(id);
HXLINE( 444)				if (this->fallback->exists(localePath,null())) {
HXLINE( 445)					return this->fallback->getFont(localePath);
            				}
            				else {
HXLINE( 447)					return this->fallback->getFont(id);
            				}
            			}
            		}
HXLINE( 449)		return null();
            	}


 ::lime::graphics::Image LimeModLibrary_obj::getImage(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_453_getImage)
HXLINE( 454)		::String symbol_modId;
HXDLIN( 454)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 454)		::String id1 = id;
HXDLIN( 454)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 454)		::String symbol_fallbackId = id1;
HXDLIN( 454)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 454)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 454)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 454)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 454)		bool _hx_tmp;
HXDLIN( 454)		bool _hx_tmp1;
HXDLIN( 454)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 454)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 454)			_hx_tmp1 = false;
            		}
HXDLIN( 454)		if (_hx_tmp1) {
HXLINE( 454)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 454)			_hx_tmp = false;
            		}
HXDLIN( 454)		if (_hx_tmp) {
HXLINE( 454)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 454)		symbol_modId = symbol_nakedId;
HXLINE( 455)		if (this->p->check(symbol_modId,null())) {
HXLINE( 457)			::Dynamic _hx_tmp = this->p->fileSystem;
HXDLIN( 457)			return ::lime::graphics::Image_obj::fromBytes(::polymod::fs::IFileSystem_obj::getFileBytes(_hx_tmp,this->p->file(symbol_modId,null())));
            		}
            		else {
HXLINE( 459)			if (this->hasFallback) {
HXLINE( 461)				::String localePath = this->p->fileLocale(id);
HXLINE( 462)				if (this->fallback->exists(localePath,null())) {
HXLINE( 463)					return this->fallback->getImage(localePath);
            				}
            				else {
HXLINE( 465)					return this->fallback->getImage(id);
            				}
            			}
            		}
HXLINE( 467)		return null();
            	}


::String LimeModLibrary_obj::getPath(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_471_getPath)
HXLINE( 472)		::String symbol_modId;
HXDLIN( 472)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 472)		::String id1 = id;
HXDLIN( 472)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 472)		::String symbol_fallbackId = id1;
HXDLIN( 472)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 472)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 472)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 472)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 472)		bool _hx_tmp;
HXDLIN( 472)		bool _hx_tmp1;
HXDLIN( 472)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 472)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 472)			_hx_tmp1 = false;
            		}
HXDLIN( 472)		if (_hx_tmp1) {
HXLINE( 472)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 472)			_hx_tmp = false;
            		}
HXDLIN( 472)		if (_hx_tmp) {
HXLINE( 472)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 472)		symbol_modId = symbol_nakedId;
HXLINE( 473)		if (this->p->check(symbol_modId,null())) {
HXLINE( 475)			return this->p->file(symbol_modId,null());
            		}
            		else {
HXLINE( 477)			if (this->hasFallback) {
HXLINE( 479)				::String localePath = this->p->fileLocale(id);
HXLINE( 480)				if (this->fallback->exists(localePath,null())) {
HXLINE( 481)					return this->fallback->getPath(localePath);
            				}
            				else {
HXLINE( 483)					return this->fallback->getPath(id);
            				}
            			}
            		}
HXLINE( 485)		return null();
            	}


::String LimeModLibrary_obj::getText(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_489_getText)
HXLINE( 490)		::String symbol_modId;
HXDLIN( 490)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 490)		::String id1 = id;
HXDLIN( 490)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 490)		::String symbol_fallbackId = id1;
HXDLIN( 490)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 490)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 490)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 490)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 490)		bool _hx_tmp;
HXDLIN( 490)		bool _hx_tmp1;
HXDLIN( 490)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 490)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 490)			_hx_tmp1 = false;
            		}
HXDLIN( 490)		if (_hx_tmp1) {
HXLINE( 490)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 490)			_hx_tmp = false;
            		}
HXDLIN( 490)		if (_hx_tmp) {
HXLINE( 490)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 490)		symbol_modId = symbol_nakedId;
HXLINE( 491)		::String modText = null();
HXLINE( 492)		if (this->p->check(symbol_modId,null())) {
HXLINE( 494)			modText = this->super::getText(symbol_modId);
            		}
            		else {
HXLINE( 496)			if (this->hasFallback) {
HXLINE( 498)				::String localePath = this->p->fileLocale(id);
HXLINE( 499)				if (this->fallback->exists(localePath,null())) {
HXLINE( 500)					modText = this->fallback->getText(localePath);
            				}
            				else {
HXLINE( 502)					modText = this->fallback->getText(id);
            				}
            			}
            		}
HXLINE( 505)		if (::hx::IsNotNull( modText )) {
HXLINE( 508)			modText = this->p->mergeAndAppendText(id,modText);
            		}
HXLINE( 511)		return modText;
            	}


 ::lime::app::Future LimeModLibrary_obj::loadBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_515_loadBytes)
HXLINE( 516)		::String symbol_modId;
HXDLIN( 516)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 516)		::String id1 = id;
HXDLIN( 516)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 516)		::String symbol_fallbackId = id1;
HXDLIN( 516)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 516)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 516)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 516)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 516)		bool _hx_tmp;
HXDLIN( 516)		bool _hx_tmp1;
HXDLIN( 516)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 516)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 516)			_hx_tmp1 = false;
            		}
HXDLIN( 516)		if (_hx_tmp1) {
HXLINE( 516)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 516)			_hx_tmp = false;
            		}
HXDLIN( 516)		if (_hx_tmp) {
HXLINE( 516)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 516)		symbol_modId = symbol_nakedId;
HXLINE( 517)		if (this->p->check(symbol_modId,null())) {
HXLINE( 519)			return ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromFile(this->p->file(symbol_modId,null()));
            		}
            		else {
HXLINE( 521)			if (this->hasFallback) {
HXLINE( 523)				::String localePath = this->p->fileLocale(id);
HXLINE( 524)				if (this->fallback->exists(localePath,null())) {
HXLINE( 525)					return this->fallback->loadBytes(localePath);
            				}
            				else {
HXLINE( 527)					return this->fallback->loadBytes(id);
            				}
            			}
            		}
HXLINE( 529)		return ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromFile(HX_("",00,00,00,00));
            	}


 ::lime::app::Future LimeModLibrary_obj::loadFont(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_533_loadFont)
HXLINE( 534)		::String symbol_modId;
HXDLIN( 534)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 534)		::String id1 = id;
HXDLIN( 534)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 534)		::String symbol_fallbackId = id1;
HXDLIN( 534)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 534)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 534)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 534)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 534)		bool _hx_tmp;
HXDLIN( 534)		bool _hx_tmp1;
HXDLIN( 534)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 534)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 534)			_hx_tmp1 = false;
            		}
HXDLIN( 534)		if (_hx_tmp1) {
HXLINE( 534)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 534)			_hx_tmp = false;
            		}
HXDLIN( 534)		if (_hx_tmp) {
HXLINE( 534)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 534)		symbol_modId = symbol_nakedId;
HXLINE( 535)		if (this->p->check(symbol_modId,null())) {
HXLINE( 540)			::Dynamic this1 = this->paths;
HXDLIN( 540)			return ::lime::text::Font_obj::loadFromFile(( ( ::haxe::ds::StringMap)(this1) )->get_string(this->p->file(symbol_modId,null())));
            		}
            		else {
HXLINE( 543)			if (this->hasFallback) {
HXLINE( 545)				::String localePath = this->p->fileLocale(id);
HXLINE( 546)				if (this->fallback->exists(localePath,null())) {
HXLINE( 547)					return this->fallback->loadFont(localePath);
            				}
            				else {
HXLINE( 549)					return this->fallback->loadFont(id);
            				}
            			}
            		}
HXLINE( 554)		return ::lime::text::Font_obj::loadFromFile(this->paths->get_string(HX_("",00,00,00,00)));
            	}


 ::lime::app::Future LimeModLibrary_obj::loadImage(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_559_loadImage)
HXLINE( 560)		::polymod::Polymod_obj::debug(((HX_("LimeModLibrary.loadImage(",b3,5f,aa,b1) + id) + HX_(")",29,00,00,00)),::hx::SourceInfo(HX_("polymod/backends/LimeBackend.hx",d6,df,f7,cf),560,HX_("polymod.backends.LimeModLibrary",25,89,45,45),HX_("loadImage",55,6b,a0,d8)));
HXLINE( 561)		::String symbol_modId;
HXDLIN( 561)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 561)		::String id1 = id;
HXDLIN( 561)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 561)		::String symbol_fallbackId = id1;
HXDLIN( 561)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 561)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 561)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 561)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 561)		bool _hx_tmp;
HXDLIN( 561)		bool _hx_tmp1;
HXDLIN( 561)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 561)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 561)			_hx_tmp1 = false;
            		}
HXDLIN( 561)		if (_hx_tmp1) {
HXLINE( 561)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 561)			_hx_tmp = false;
            		}
HXDLIN( 561)		if (_hx_tmp) {
HXLINE( 561)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 561)		symbol_modId = symbol_nakedId;
HXLINE( 562)		if (this->p->check(symbol_modId,null())) {
HXLINE( 564)			return ::lime::graphics::Image_obj::loadFromFile(this->p->file(symbol_modId,null()));
            		}
            		else {
HXLINE( 566)			if (this->hasFallback) {
HXLINE( 568)				::String localePath = this->p->fileLocale(id);
HXLINE( 569)				if (this->fallback->exists(localePath,null())) {
HXLINE( 570)					return this->fallback->loadImage(localePath);
            				}
            				else {
HXLINE( 572)					return this->fallback->loadImage(id);
            				}
            			}
            		}
HXLINE( 574)		return ::lime::graphics::Image_obj::loadFromFile(HX_("",00,00,00,00));
            	}


 ::lime::app::Future LimeModLibrary_obj::loadAudioBuffer(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_578_loadAudioBuffer)
HXLINE( 579)		::String symbol_modId;
HXDLIN( 579)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 579)		::String id1 = id;
HXDLIN( 579)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 579)		::String symbol_fallbackId = id1;
HXDLIN( 579)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 579)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 579)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 579)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 579)		bool _hx_tmp;
HXDLIN( 579)		bool _hx_tmp1;
HXDLIN( 579)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 579)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 579)			_hx_tmp1 = false;
            		}
HXDLIN( 579)		if (_hx_tmp1) {
HXLINE( 579)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 579)			_hx_tmp = false;
            		}
HXDLIN( 579)		if (_hx_tmp) {
HXLINE( 579)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 579)		symbol_modId = symbol_nakedId;
HXLINE( 580)		if (this->p->check(symbol_modId,null())) {
HXLINE( 582)			::Dynamic this1 = this->pathGroups;
HXDLIN( 582)			if (( ( ::haxe::ds::StringMap)(this1) )->exists(this->p->file(symbol_modId,null()))) {
HXLINE( 584)				::Dynamic this1 = this->pathGroups;
HXDLIN( 584)				return ::lime::media::AudioBuffer_obj::loadFromFiles(( (::Array< ::String >)(( ( ::haxe::ds::StringMap)(this1) )->get(this->p->file(symbol_modId,null()))) ));
            			}
            			else {
HXLINE( 588)				::Dynamic this1 = this->paths;
HXDLIN( 588)				return ::lime::media::AudioBuffer_obj::loadFromFile(( ( ::haxe::ds::StringMap)(this1) )->get_string(this->p->file(symbol_modId,null())));
            			}
            		}
            		else {
HXLINE( 591)			if (this->hasFallback) {
HXLINE( 593)				::String localePath = this->p->fileLocale(id);
HXLINE( 594)				if (this->fallback->exists(localePath,null())) {
HXLINE( 595)					return this->fallback->loadAudioBuffer(localePath);
            				}
            				else {
HXLINE( 597)					return this->fallback->loadAudioBuffer(id);
            				}
            			}
            		}
HXLINE( 599)		return ::lime::media::AudioBuffer_obj::loadFromFile(HX_("",00,00,00,00));
            	}


 ::lime::app::Future LimeModLibrary_obj::loadText(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_83234c3e57483dca_603_loadText)
HXLINE( 604)		::String symbol_modId;
HXDLIN( 604)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 604)		::String id1 = id;
HXDLIN( 604)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 604)		::String symbol_fallbackId = id1;
HXDLIN( 604)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 604)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 604)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 604)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 604)		bool _hx_tmp;
HXDLIN( 604)		bool _hx_tmp1;
HXDLIN( 604)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 604)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 604)			_hx_tmp1 = false;
            		}
HXDLIN( 604)		if (_hx_tmp1) {
HXLINE( 604)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 604)			_hx_tmp = false;
            		}
HXDLIN( 604)		if (_hx_tmp) {
HXLINE( 604)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 604)		symbol_modId = symbol_nakedId;
HXLINE( 605)		if (this->p->check(symbol_modId,null())) {
HXLINE( 607)			 ::lime::net::_HTTPRequest_String request =  ::lime::net::_HTTPRequest_String_obj::__alloc( HX_CTX ,null());
HXLINE( 608)			::Dynamic this1 = this->paths;
HXDLIN( 608)			return request->load(( ( ::haxe::ds::StringMap)(this1) )->get_string(this->p->file(symbol_modId,null())));
            		}
            		else {
HXLINE( 610)			if (this->hasFallback) {
HXLINE( 612)				::String localePath = this->p->fileLocale(id);
HXLINE( 613)				if (this->fallback->exists(localePath,null())) {
HXLINE( 614)					return this->fallback->loadText(localePath);
            				}
            				else {
HXLINE( 616)					return this->fallback->loadText(id);
            				}
            			}
            		}
HXLINE( 618)		 ::lime::net::_HTTPRequest_String request =  ::lime::net::_HTTPRequest_String_obj::__alloc( HX_CTX ,null());
HXLINE( 619)		return request->load(HX_("",00,00,00,00));
            	}


bool LimeModLibrary_obj::isLocal(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_623_isLocal)
HXLINE( 624)		::String symbol_modId;
HXDLIN( 624)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 624)		::String id1 = id;
HXDLIN( 624)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 624)		::String symbol_fallbackId = id1;
HXDLIN( 624)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 624)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 624)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 624)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 624)		bool _hx_tmp;
HXDLIN( 624)		bool _hx_tmp1;
HXDLIN( 624)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 624)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 624)			_hx_tmp1 = false;
            		}
HXDLIN( 624)		if (_hx_tmp1) {
HXLINE( 624)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 624)			_hx_tmp = false;
            		}
HXDLIN( 624)		if (_hx_tmp) {
HXLINE( 624)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 624)		symbol_modId = symbol_nakedId;
HXLINE( 625)		if (this->p->check(symbol_modId,null())) {
HXLINE( 627)			return true;
            		}
            		else {
HXLINE( 629)			if (this->hasFallback) {
HXLINE( 631)				::String localePath = this->p->fileLocale(id);
HXLINE( 632)				if (this->fallback->exists(localePath,null())) {
HXLINE( 633)					return this->fallback->isLocal(localePath,type);
            				}
            				else {
HXLINE( 635)					return this->fallback->isLocal(id,type);
            				}
            			}
            		}
HXLINE( 637)		return false;
            	}


::Array< ::String > LimeModLibrary_obj::list(::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_641_list)
HXLINE( 642)		::Array< ::String > fallbackList;
HXDLIN( 642)		if (this->hasFallback) {
HXLINE( 642)			fallbackList = this->fallback->list(type);
            		}
            		else {
HXLINE( 642)			fallbackList = ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 644)		::String requestedType;
HXDLIN( 644)		if (::hx::IsNotNull( type )) {
HXLINE( 644)			requestedType = type;
            		}
            		else {
HXLINE( 644)			requestedType = null();
            		}
HXLINE( 645)		::Array< ::String > items = ::Array_obj< ::String >::__new(0);
HXLINE( 647)		{
HXLINE( 647)			 ::Dynamic id = this->p->type->keys();
HXDLIN( 647)			while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 647)				::String id1 = ( (::String)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 649)				bool _hx_tmp;
HXDLIN( 649)				if ((id1.indexOf(::polymod::PolymodConfig_obj::get_appendFolder(),null()) != 0)) {
HXLINE( 649)					_hx_tmp = (id1.indexOf(::polymod::PolymodConfig_obj::get_mergeFolder(),null()) == 0);
            				}
            				else {
HXLINE( 649)					_hx_tmp = true;
            				}
HXDLIN( 649)				if (_hx_tmp) {
HXLINE( 650)					continue;
            				}
HXLINE( 651)				bool _hx_tmp1;
HXDLIN( 651)				if (::hx::IsNotNull( requestedType )) {
HXLINE( 651)					_hx_tmp1 = this->exists(id1,requestedType);
            				}
            				else {
HXLINE( 651)					_hx_tmp1 = true;
            				}
HXDLIN( 651)				if (_hx_tmp1) {
HXLINE( 653)					items->push(id1);
            				}
            			}
            		}
HXLINE( 662)		{
HXLINE( 662)			int _g = 0;
HXDLIN( 662)			while((_g < fallbackList->length)){
HXLINE( 662)				::String fallbackId = fallbackList->__get(_g);
HXDLIN( 662)				_g = (_g + 1);
HXLINE( 710)				::String assetId = fallbackId;
HXLINE( 711)				if ((items->indexOf(assetId,null()) == -1)) {
HXLINE( 713)					bool _hx_tmp;
HXDLIN( 713)					if (::hx::IsNotNull( requestedType )) {
HXLINE( 713)						_hx_tmp = this->fallback->exists(assetId,type);
            					}
            					else {
HXLINE( 713)						_hx_tmp = true;
            					}
HXDLIN( 713)					if (_hx_tmp) {
HXLINE( 715)						items->push(assetId);
            					}
            				}
            			}
            		}
HXLINE( 721)		return items;
            	}


::String LimeModLibrary_obj::LimeToPoly(::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_273_LimeToPoly)
HXDLIN( 273)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("BINARY",01,68,8e,9f)) ){
HXLINE( 275)			return HX_("BYTES",4b,40,86,3b);
HXDLIN( 275)			goto _hx_goto_20;
            		}
            		if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
HXLINE( 276)			return HX_("FONT",cf,25,81,2e);
HXDLIN( 276)			goto _hx_goto_20;
            		}
            		if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
HXLINE( 277)			return HX_("IMAGE",3b,57,57,3b);
HXDLIN( 277)			goto _hx_goto_20;
            		}
            		if (  (_hx_switch_0==HX_("MANIFEST",af,8b,af,29)) ){
HXLINE( 280)			return HX_("MANIFEST",af,8b,af,29);
HXDLIN( 280)			goto _hx_goto_20;
            		}
            		if (  (_hx_switch_0==HX_("MUSIC",85,08,49,8e)) ){
HXLINE( 278)			return HX_("AUDIO_MUSIC",fc,6c,05,48);
HXDLIN( 278)			goto _hx_goto_20;
            		}
            		if (  (_hx_switch_0==HX_("SOUND",af,c4,ba,fe)) ){
HXLINE( 279)			return HX_("AUDIO_SOUND",26,29,77,b8);
HXDLIN( 279)			goto _hx_goto_20;
            		}
            		if (  (_hx_switch_0==HX_("TEMPLATE",3a,78,cd,05)) ){
HXLINE( 281)			return HX_("TEMPLATE",3a,78,cd,05);
HXDLIN( 281)			goto _hx_goto_20;
            		}
            		if (  (_hx_switch_0==HX_("TEXT",ad,94,ba,37)) ){
HXLINE( 282)			return HX_("TEXT",ad,94,ba,37);
HXDLIN( 282)			goto _hx_goto_20;
            		}
            		/* default */{
HXLINE( 283)			return HX_("UNKNOWN",6a,f7,4e,61);
            		}
            		_hx_goto_20:;
HXLINE( 273)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LimeModLibrary_obj,LimeToPoly,return )

::String LimeModLibrary_obj::PolyToLime(::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_289_PolyToLime)
HXDLIN( 289)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("AUDIO_GENERIC",2e,f6,26,23)) ){
HXLINE( 296)			return HX_("SOUND",af,c4,ba,fe);
HXDLIN( 296)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("AUDIO_MUSIC",fc,6c,05,48)) ){
HXLINE( 294)			return HX_("MUSIC",85,08,49,8e);
HXDLIN( 294)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("AUDIO_SOUND",26,29,77,b8)) ){
HXLINE( 295)			return HX_("SOUND",af,c4,ba,fe);
HXDLIN( 295)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("BYTES",4b,40,86,3b)) ){
HXLINE( 291)			return HX_("BINARY",01,68,8e,9f);
HXDLIN( 291)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
HXLINE( 292)			return HX_("FONT",cf,25,81,2e);
HXDLIN( 292)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
HXLINE( 293)			return HX_("IMAGE",3b,57,57,3b);
HXDLIN( 293)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("MANIFEST",af,8b,af,29)) ){
HXLINE( 297)			return HX_("MANIFEST",af,8b,af,29);
HXDLIN( 297)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("TEMPLATE",3a,78,cd,05)) ){
HXLINE( 298)			return HX_("TEMPLATE",3a,78,cd,05);
HXDLIN( 298)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("TEXT",ad,94,ba,37)) ){
HXLINE( 299)			return HX_("TEXT",ad,94,ba,37);
HXDLIN( 299)			goto _hx_goto_22;
            		}
            		/* default */{
HXLINE( 300)			return HX_("BINARY",01,68,8e,9f);
            		}
            		_hx_goto_22:;
HXLINE( 289)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LimeModLibrary_obj,PolyToLime,return )


::hx::ObjectPtr< LimeModLibrary_obj > LimeModLibrary_obj::__new( ::polymod::backends::LimeBackend backend, ::lime::utils::AssetLibrary fallback,::String __o_pathPrefix) {
	::hx::ObjectPtr< LimeModLibrary_obj > __this = new LimeModLibrary_obj();
	__this->__construct(backend,fallback,__o_pathPrefix);
	return __this;
}

::hx::ObjectPtr< LimeModLibrary_obj > LimeModLibrary_obj::__alloc(::hx::Ctx *_hx_ctx, ::polymod::backends::LimeBackend backend, ::lime::utils::AssetLibrary fallback,::String __o_pathPrefix) {
	LimeModLibrary_obj *__this = (LimeModLibrary_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LimeModLibrary_obj), true, "polymod.backends.LimeModLibrary"));
	*(void **)__this = LimeModLibrary_obj::_hx_vtable;
	__this->__construct(backend,fallback,__o_pathPrefix);
	return __this;
}

LimeModLibrary_obj::LimeModLibrary_obj()
{
}

void LimeModLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LimeModLibrary);
	HX_MARK_MEMBER_NAME(pathPrefix,"pathPrefix");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(fallback,"fallback");
	HX_MARK_MEMBER_NAME(hasFallback,"hasFallback");
	HX_MARK_MEMBER_NAME(type,"type");
	 ::lime::utils::AssetLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LimeModLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pathPrefix,"pathPrefix");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(fallback,"fallback");
	HX_VISIT_MEMBER_NAME(hasFallback,"hasFallback");
	HX_VISIT_MEMBER_NAME(type,"type");
	 ::lime::utils::AssetLibrary_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LimeModLibrary_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"p") ) { return ::hx::Val( p ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return ::hx::Val( getFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return ::hx::Val( getPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"getText") ) { return ::hx::Val( getText_dyn() ); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return ::hx::Val( isLocal_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fallback") ) { return ::hx::Val( fallback ); }
		if (HX_FIELD_EQ(inName,"getAsset") ) { return ::hx::Val( getAsset_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBytes") ) { return ::hx::Val( getBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"getImage") ) { return ::hx::Val( getImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return ::hx::Val( loadFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return ::hx::Val( loadText_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return ::hx::Val( loadBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return ::hx::Val( loadImage_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pathPrefix") ) { return ::hx::Val( pathPrefix ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasFallback") ) { return ::hx::Val( hasFallback ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"existsDefault") ) { return ::hx::Val( existsDefault_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { return ::hx::Val( getAudioBuffer_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { return ::hx::Val( loadAudioBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LimeModLibrary_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"LimeToPoly") ) { outValue = LimeToPoly_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"PolyToLime") ) { outValue = PolyToLime_dyn(); return true; }
	}
	return false;
}

::hx::Val LimeModLibrary_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast<  ::polymod::backends::LimeBackend >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast<  ::polymod::backends::PolymodAssetLibrary >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fallback") ) { fallback=inValue.Cast<  ::lime::utils::AssetLibrary >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pathPrefix") ) { pathPrefix=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasFallback") ) { hasFallback=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LimeModLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pathPrefix",17,7d,ec,c0));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("p",70,00,00,00));
	outFields->push(HX_("fallback",22,f0,9d,2a));
	outFields->push(HX_("hasFallback",9c,d5,54,fd));
	outFields->push(HX_("type",ba,f2,08,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LimeModLibrary_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(LimeModLibrary_obj,pathPrefix),HX_("pathPrefix",17,7d,ec,c0)},
	{::hx::fsObject /*  ::polymod::backends::LimeBackend */ ,(int)offsetof(LimeModLibrary_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsObject /*  ::polymod::backends::PolymodAssetLibrary */ ,(int)offsetof(LimeModLibrary_obj,p),HX_("p",70,00,00,00)},
	{::hx::fsObject /*  ::lime::utils::AssetLibrary */ ,(int)offsetof(LimeModLibrary_obj,fallback),HX_("fallback",22,f0,9d,2a)},
	{::hx::fsBool,(int)offsetof(LimeModLibrary_obj,hasFallback),HX_("hasFallback",9c,d5,54,fd)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(LimeModLibrary_obj,type),HX_("type",ba,f2,08,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LimeModLibrary_obj_sStaticStorageInfo = 0;
#endif

static ::String LimeModLibrary_obj_sMemberFields[] = {
	HX_("pathPrefix",17,7d,ec,c0),
	HX_("b",62,00,00,00),
	HX_("p",70,00,00,00),
	HX_("fallback",22,f0,9d,2a),
	HX_("hasFallback",9c,d5,54,fd),
	HX_("type",ba,f2,08,4d),
	HX_("destroy",fa,2c,86,24),
	HX_("getAsset",7a,79,10,86),
	HX_("exists",dc,1d,e0,bf),
	HX_("existsDefault",45,96,7c,43),
	HX_("getAudioBuffer",80,41,e3,26),
	HX_("getBytes",f5,17,6f,1d),
	HX_("getFont",85,0d,43,16),
	HX_("getImage",e5,2e,40,1d),
	HX_("getPath",5b,95,d4,1c),
	HX_("getText",63,7c,7c,1f),
	HX_("loadBytes",65,54,cf,d8),
	HX_("loadFont",15,2f,60,b4),
	HX_("loadImage",55,6b,a0,d8),
	HX_("loadAudioBuffer",f0,71,7c,e3),
	HX_("loadText",f3,9d,99,bd),
	HX_("isLocal",21,6d,76,15),
	HX_("list",5e,1c,b3,47),
	::String(null()) };

::hx::Class LimeModLibrary_obj::__mClass;

static ::String LimeModLibrary_obj_sStaticFields[] = {
	HX_("LimeToPoly",7c,76,3c,12),
	HX_("PolyToLime",bc,39,e0,08),
	::String(null())
};

void LimeModLibrary_obj::__register()
{
	LimeModLibrary_obj _hx_dummy;
	LimeModLibrary_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.backends.LimeModLibrary",25,89,45,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LimeModLibrary_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LimeModLibrary_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LimeModLibrary_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LimeModLibrary_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LimeModLibrary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LimeModLibrary_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace backends
