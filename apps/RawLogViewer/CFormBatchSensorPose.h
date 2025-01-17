/* +------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)            |
   |                          https://www.mrpt.org/                         |
   |                                                                        |
   | Copyright (c) 2005-2023, Individual contributors, see AUTHORS file     |
   | See: https://www.mrpt.org/Authors - All rights reserved.               |
   | Released under BSD License. See: https://www.mrpt.org/License          |
   +------------------------------------------------------------------------+ */
#ifndef CFORMBATCHSENSORPOSE_H
#define CFORMBATCHSENSORPOSE_H

//(*Headers(CFormBatchSensorPose)
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class CFormBatchSensorPose : public wxDialog
{
   public:
	CFormBatchSensorPose(wxWindow* parent, wxWindowID id = wxID_ANY);
	~CFormBatchSensorPose() override;

	//(*Declarations(CFormBatchSensorPose)
	wxStaticText* StaticText1;
	wxButton* btnApply;
	wxBitmapButton* btnOpen;
	wxButton* btnCancel;
	wxTextCtrl* edText;
	//*)

   protected:
	//(*Identifiers(CFormBatchSensorPose)
	static const long ID_STATICTEXT1;
	static const long ID_TEXTCTRL1;
	static const long ID_BITMAPBUTTON1;
	static const long ID_BUTTON1;
	static const long ID_BUTTON2;
	//*)

   private:
	//(*Handlers(CFormBatchSensorPose)
	void OnbtnOpenClick(wxCommandEvent& event);
	void OnbtnApplyClick(wxCommandEvent& event);
	void OnbtnCancelClick(wxCommandEvent& event);
	//*)

	DECLARE_EVENT_TABLE()
};

#endif
