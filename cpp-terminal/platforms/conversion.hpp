#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace Term
{
namespace Private
{

#if defined(_WIN32)
std::string to_utf8(const wchar_t* utf16Str);
#endif

std::uint8_t utf8_decode_step(std::uint8_t state, std::uint8_t octet, std::uint32_t* cpp);

void codepoint_to_utf8(std::string& s, char32_t c);

std::u32string utf8_to_utf32(const std::string& s);

std::string utf32_to_utf8(const std::u32string& s);

bool is_valid_utf8_code_unit(const std::string& s);

}  // namespace Private
}  // namespace Term
