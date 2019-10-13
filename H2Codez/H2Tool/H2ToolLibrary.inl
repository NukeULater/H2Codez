#pragma once
#include "stdafx.h"
#include "Common/FiloInterface.h"
#include "Common/BasicTagTypes.h"

static const char* get_h2tool_version()
{
	typedef char*(_cdecl* _get_h2tool_build_date)();
	static _get_h2tool_build_date get_h2tool_build_date = CAST_PTR(_get_h2tool_build_date, 0xEA760);

	return get_h2tool_build_date();
}

static bool __cdecl TAG_ADD_IMPORT_INFO_BLOCK(void* IMPORT_INFO_OFFSET)
{
	typedef bool(_cdecl* TAG_ADD_IMPORT_INFO_BLOCK)(void*);
	static TAG_ADD_IMPORT_INFO_BLOCK _TAG_ADD_IMPORT_INFO_BLOCK = CAST_PTR(TAG_ADD_IMPORT_INFO_BLOCK, 0x545D40);

	return _TAG_ADD_IMPORT_INFO_BLOCK(IMPORT_INFO_OFFSET);
}
static bool __cdecl TAG_ADD_IMPORT_INFO_ADD_DATA_(void* IMPORT_INFO_OFFSET, file_reference *FILE_REF)
{
	typedef bool(_cdecl* TAG_ADD_IMPORT_INFO_ADD_DATA_)(void*, file_reference*);
	static TAG_ADD_IMPORT_INFO_ADD_DATA_ _TAG_ADD_IMPORT_INFO_ADD_DATA_ = CAST_PTR(TAG_ADD_IMPORT_INFO_ADD_DATA_, 0x545E90);

	return _TAG_ADD_IMPORT_INFO_ADD_DATA_(IMPORT_INFO_OFFSET, FILE_REF);
}
static bool __cdecl TAG_FILE_CHECK_IS_WRITEABLE(datum TAG, bool suppress_error = false)
{
	typedef bool(_cdecl* _TAG_FILE_CHECK_READ_ONLY_ACCESS)(int, int);
	static _TAG_FILE_CHECK_READ_ONLY_ACCESS TAG_FILE_CHECK_READ_ONLY_ACCESS = CAST_PTR(_TAG_FILE_CHECK_READ_ONLY_ACCESS, 0x410D20);

	return TAG_FILE_CHECK_READ_ONLY_ACCESS(TAG.as_long(), suppress_error);
}

static int __cdecl TAG_BLOCK_GET_ELEMENT_WITH_SIZE(void* FIELD_OFFSET, int ELEMENT_INDEX, int FIELD_SIZE)
{
	typedef int(_cdecl* TAG_BLOCK_GET_ELEMENT_WITH_SIZE)(void*, int, int);
	static TAG_BLOCK_GET_ELEMENT_WITH_SIZE TAG_BLOCK_GET_ELEMENT_WITH_SIZE_ = CAST_PTR(TAG_BLOCK_GET_ELEMENT_WITH_SIZE, 0x532970);

	return TAG_BLOCK_GET_ELEMENT_WITH_SIZE_(FIELD_OFFSET, ELEMENT_INDEX, FIELD_SIZE);
}

typedef bool (*find_tag_comparison)(void *element, void *find_data);

static char __cdecl load_model_object_definations_(DWORD IMPORT_INFO_OFFSET_, void *proc_definations_, __int16 proc_count, file_reference& FILE_REF_)
{
	typedef char(_cdecl* _load_model_object_definations_)(DWORD, void *, __int16, file_reference&);
	static _load_model_object_definations_ load_model_object_definations_ = CAST_PTR(_load_model_object_definations_, 0x412E00);

	return load_model_object_definations_(IMPORT_INFO_OFFSET_, proc_definations_, proc_count, FILE_REF_);
}
static bool _cdecl tool_build_paths(wcstring directory, const char* Subfolder, file_reference& out_reference, wchar_t out_path[256], wchar_t (*tag_path)[256] = nullptr)
{
	typedef bool(_cdecl*_tool_build_paths)(wcstring, const char*, file_reference&, wchar_t[256], void*);
	static const _tool_build_paths tool_build_paths = CAST_PTR(_tool_build_paths, 0x4119B0);
	return tool_build_paths(directory, Subfolder, out_reference, out_path, tag_path);
}
static bool _cdecl use_import_definitions(const void* definitions, int count, file_reference& reference, void* context_data, bool unk = false)
{
	typedef bool(_cdecl* _use_import_definitions)(const void*, int, file_reference&, void*, DWORD);
	static const _use_import_definitions use_import_definitions = CAST_PTR(_use_import_definitions, 0x412100);
	return use_import_definitions(definitions, count, reference, context_data, unk);
}
