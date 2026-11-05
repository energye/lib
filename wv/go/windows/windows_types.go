//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Apache License 2.0
//
//----------------------------------------

package windows

import (
	"github.com/energye/lcl/api"
	"github.com/energye/lcl/types"
	wvTypes "github.com/energye/wv/types/windows"
)

type TWVBrowserBaseSimulateKeyEventArgs struct {
	Type                  wvTypes.TWV2KeyEventType // TWV2KeyEventType
	Modifiers             int32                    // integer
	WindowsVirtualKeyCode int32                    // integer
	NativeVirtualKeyCode  int32                    // integer
	Timestamp             int32                    // integer
	Location              int32                    // integer
	AutoRepeat            types.LongBool           // boolean
	IsKeypad              types.LongBool           // boolean
	IsSystemKey           types.LongBool           // boolean
	Text                  string                   // wvstring
	Unmodifiedtext        string                   // wvstring
	KeyIdentifier         string                   // wvstring
	Code                  string                   // wvstring
	Key                   string                   // wvstring
}

type TWVCustomSchemeInfo struct {
	SchemeName            string         // wvstring
	TreatAsSecure         types.LongBool // boolean
	AllowedDomains        string         // wvstring
	HasAuthorityComponent types.LongBool // boolean
}

type TWVWindowFeatures struct {
	HasPosition             types.LongBool // boolean
	HasSize                 types.LongBool // boolean
	Left                    uint32         // cardinal
	Top                     uint32         // cardinal
	Width                   uint32         // cardinal
	Height                  uint32         // cardinal
	ShouldDisplayMenuBar    types.LongBool // boolean
	ShouldDisplayStatus     types.LongBool // boolean
	ShouldDisplayToolbar    types.LongBool // boolean
	ShouldDisplayScrollBars types.LongBool // boolean
}

func (m *TWVBrowserBaseSimulateKeyEventArgs) ToPas() *tWVBrowserBaseSimulateKeyEventArgs {
	if m == nil {
		return nil
	}
	return &tWVBrowserBaseSimulateKeyEventArgs{
		Type:                  m.Type,
		Modifiers:             m.Modifiers,
		WindowsVirtualKeyCode: m.WindowsVirtualKeyCode,
		NativeVirtualKeyCode:  m.NativeVirtualKeyCode,
		Timestamp:             m.Timestamp,
		Location:              m.Location,
		AutoRepeat:            m.AutoRepeat,
		IsKeypad:              m.IsKeypad,
		IsSystemKey:           m.IsSystemKey,
		Text:                  api.PasStr(m.Text),
		Unmodifiedtext:        api.PasStr(m.Unmodifiedtext),
		KeyIdentifier:         api.PasStr(m.KeyIdentifier),
		Code:                  api.PasStr(m.Code),
		Key:                   api.PasStr(m.Key),
	}
}

type tWVBrowserBaseSimulateKeyEventArgs struct {
	Type                  wvTypes.TWV2KeyEventType // TWV2KeyEventType
	Modifiers             int32                    // integer
	WindowsVirtualKeyCode int32                    // integer
	NativeVirtualKeyCode  int32                    // integer
	Timestamp             int32                    // integer
	Location              int32                    // integer
	AutoRepeat            types.LongBool           // boolean
	IsKeypad              types.LongBool           // boolean
	IsSystemKey           types.LongBool           // boolean
	Text                  uintptr                  // wvstring
	Unmodifiedtext        uintptr                  // wvstring
	KeyIdentifier         uintptr                  // wvstring
	Code                  uintptr                  // wvstring
	Key                   uintptr                  // wvstring
}

func (m *tWVBrowserBaseSimulateKeyEventArgs) ToGo() TWVBrowserBaseSimulateKeyEventArgs {
	if m == nil {
		return TWVBrowserBaseSimulateKeyEventArgs{}
	}
	return TWVBrowserBaseSimulateKeyEventArgs{
		Type:                  m.Type,
		Modifiers:             m.Modifiers,
		WindowsVirtualKeyCode: m.WindowsVirtualKeyCode,
		NativeVirtualKeyCode:  m.NativeVirtualKeyCode,
		Timestamp:             m.Timestamp,
		Location:              m.Location,
		AutoRepeat:            m.AutoRepeat,
		IsKeypad:              m.IsKeypad,
		IsSystemKey:           m.IsSystemKey,
		Text:                  api.GoStr(m.Text),
		Unmodifiedtext:        api.GoStr(m.Unmodifiedtext),
		KeyIdentifier:         api.GoStr(m.KeyIdentifier),
		Code:                  api.GoStr(m.Code),
		Key:                   api.GoStr(m.Key),
	}
}
func (m *TWVCustomSchemeInfo) ToPas() *tWVCustomSchemeInfo {
	if m == nil {
		return nil
	}
	return &tWVCustomSchemeInfo{
		SchemeName:            api.PasStr(m.SchemeName),
		TreatAsSecure:         m.TreatAsSecure,
		AllowedDomains:        api.PasStr(m.AllowedDomains),
		HasAuthorityComponent: m.HasAuthorityComponent,
	}
}

type tWVCustomSchemeInfo struct {
	SchemeName            uintptr        // wvstring
	TreatAsSecure         types.LongBool // boolean
	AllowedDomains        uintptr        // wvstring
	HasAuthorityComponent types.LongBool // boolean
}

func (m *tWVCustomSchemeInfo) ToGo() TWVCustomSchemeInfo {
	if m == nil {
		return TWVCustomSchemeInfo{}
	}
	return TWVCustomSchemeInfo{
		SchemeName:            api.GoStr(m.SchemeName),
		TreatAsSecure:         m.TreatAsSecure,
		AllowedDomains:        api.GoStr(m.AllowedDomains),
		HasAuthorityComponent: m.HasAuthorityComponent,
	}
}

type ICoreWebView2PermissionRequestedEventArgs2 uintptr

// PPCoreWebView2CustomSchemeRegistration = ^ICoreWebView2CustomSchemeRegistration
type PPCoreWebView2CustomSchemeRegistration uintptr
