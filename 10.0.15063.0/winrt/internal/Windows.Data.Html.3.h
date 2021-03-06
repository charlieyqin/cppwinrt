// C++ for the Windows Runtime v1.0.170406.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Data.Html.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Data::Html {

struct HtmlUtilities
{
    HtmlUtilities() = delete;
    static hstring ConvertToText(hstring_view html);
};

}

}
