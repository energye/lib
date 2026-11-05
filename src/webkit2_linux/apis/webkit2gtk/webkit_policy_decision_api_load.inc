Pointer(webkit_policy_decision_use) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_policy_decision_use');
Pointer(webkit_policy_decision_use_with_policies) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_policy_decision_use_with_policies');
Pointer(webkit_policy_decision_ignore) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_policy_decision_ignore');
Pointer(webkit_policy_decision_download) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_policy_decision_download');