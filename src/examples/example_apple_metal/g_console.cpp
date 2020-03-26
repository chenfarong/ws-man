//
//  g_console.cpp
//  example_apple_metal_ios
//
//  Created by chenfarong on 2020/3/24.
//  Copyright © 2020 Warren Moore. All rights reserved.
//

#include <stdio.h>
#include "imgui.h"
#include "imgui_internal.h"

extern ImGuiContext*   GImGui;

void ShowTopBar()
{
    //bool bTopBar=true;
    //ImGuiCond_Always
    ImGuiContext& g = *GImGui;
    ImVec2 vec2;
    vec2=ImGui::GetWindowSize();
    vec2.y=40;
    //ImGui::SetNextWindowSize(vec2,ImGuiCond_Always);
    ImGui::SetNextWindowSize(ImVec2(g.IO.DisplaySize.x, g.NextWindowData.MenuBarOffsetMinVal.y + g.FontBaseSize + g.Style.FramePadding.y));
//项目名称 服务器位置  角色名 管理权限
//    ImGui::Begin("bar",&bTopBar);
//    ImGui::Text("This window has a changing title.");
//    ImGui::End();
//    ImGui::SameLine();
    if (ImGui::BeginMainMenuBar())
    {
        if (ImGui::BeginMenu("窗口"))
        {
            if (ImGui::MenuItem("命令树", "CTRL+Z")) {}
            if (ImGui::MenuItem("发出历史", "CTRL+Y", false, false)) {}  // Disabled item
            
            if (ImGui::MenuItem("数据接收", "CTRL+X")) {}
            if (ImGui::MenuItem("Copy", "CTRL+C")) {}
            ImGui::Separator();
            if (ImGui::MenuItem("退出", "CTRL+V")) {}
            ImGui::EndMenu();
        }

        ImGui::Text("project:demo");
        ImGui::SameLine();
 //        ImGui::Text("project:demo");
 //       ImGui::SameLine();
        char buffer[4096];
        ImGui::InputText("server", buffer, sizeof(buffer));
//        if (ImGui::BeginMenu("File"))
//        {
//            ShowExampleMenuFile();
//            ImGui::EndMenu();
//        }
//        if (ImGui::BeginMenu("Edit"))
//        {
//            if (ImGui::MenuItem("Undo", "CTRL+Z")) {}
//            if (ImGui::MenuItem("Redo", "CTRL+Y", false, false)) {}  // Disabled item
//            ImGui::Separator();
//            if (ImGui::MenuItem("Cut", "CTRL+X")) {}
//            if (ImGui::MenuItem("Copy", "CTRL+C")) {}
//            if (ImGui::MenuItem("Paste", "CTRL+V")) {}
//            ImGui::EndMenu();
//        }
        ImGui::EndMainMenuBar();
    }
}

//显示命令树
void ShowCmdTree()
{
    
}

void ShowBottomBar()
{
    
}

void ShowRecvWindow(bool* p_bool)
{
    
}


