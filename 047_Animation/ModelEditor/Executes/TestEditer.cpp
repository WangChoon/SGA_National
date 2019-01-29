#include "stdafx.h"
#include "TestEditer.h"
#include "Fbx/FbxLoader.h"

void TestEditer::Initialize()
{
	bWindow = true;
	color = D3DXCOLOR(1, 1, 1, 1);
}

void TestEditer::Ready()
{
	
}

void TestEditer::Destroy()
{
	
}

void TestEditer::Update()
{
	

}

void TestEditer::PreRender()
{

}

void TestEditer::Render()
{
	if (bWindow == true)
	{
		ImGui::Begin("Environment", &bWindow, ImGuiWindowFlags_MenuBar);

		if (ImGui::BeginMenuBar())
		{
			if (ImGui::BeginMenu("File"))
			{
				ImGui::MenuItem("Test");

				ImGui::EndMenu();
			}

			ImGui::EndMenuBar();
		}


		ImGui::ColorEdit3("Color", (float *)&color);

		if (ImGui::Button("Close"))
			bWindow = false;

		ImGui::End();

	}


	if(ImGui::BeginMainMenuBar())
	{
		if (ImGui::BeginMenu("File"))
		{
			if (ImGui::MenuItem("Open Window"))
				bWindow = true;

			if (ImGui::MenuItem("Close Window"))
				bWindow = false;

			ImGui::EndMenu();
		}

		if (ImGui::BeginMenu("Edit"))
		{
			if (ImGui::MenuItem("Test"))
			{
				D3DDesc desc;
				D3D::GetDesc(&desc);

				MessageBox(desc.Handle, L"ÈÄºñÀû Å×½ºÆ®ÀÓ.", L"¶ÕÄf¶ÕÄf¶Õ", MB_OK);
			}

			ImGui::EndMenu();
		}


	ImGui::EndMainMenuBar();
	}

}