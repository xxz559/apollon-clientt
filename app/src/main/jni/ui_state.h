#pragma once

#include <string>
#include <vector>
#include <ImGui/imgui.h>

// ===== Custom Buttons =====
struct CustomButton {
    std::string name;
    int action = 1;
    bool enabled = true;
    float x = 200.0f;
    float y = 200.0f;
    float w = 150.0f;
    float h = 80.0f;
};

std::vector<CustomButton> customButtons;
bool editButtonsMode = false;

const char* ButtonActions[] = {
    "None", "KillAura", "MobAura", "NoClip", "FullBright", "Xray",
    "NoSlowDown", "FastFall", "AutoClicker", "Sprint", "AutoClickBuild",
    "AntiKnockback", "Step", "LadderFly"
};

// ===== HUD =====
bool hudEnabled = true;
bool hudWatermark = true;
bool hudCoords = true;
bool hudHotkeys = true;
bool hudActivePotions = true;
bool hudTargetHUD = true;

float hudWatermarkX = 20.0f;
float hudWatermarkY = 20.0f;
float hudCoordsX = 0.0f;
float hudCoordsY = 20.0f;
float hudPotionsX = 0.0f;
float hudPotionsY = 200.0f;
float hudScale = 1.0f;