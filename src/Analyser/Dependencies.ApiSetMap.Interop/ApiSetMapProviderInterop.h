#pragma once

#include "TargetDll.h"

using namespace System;
using namespace System::Collections::Generic;

namespace Dependencies::ApiSetMapInterop 
{
	public ref class ApiSetMapProviderInterop
	{
    public:
        IDictionary<String^, IList<TargetDll>^>^ GetApiSetMap();
		// TODO: Add your methods for this class here.
	};
}
