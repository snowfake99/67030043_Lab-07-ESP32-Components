#include <stdio.h>
#include "esp_log.h"
#include "display.h"

static const char *TAG = "DISPLAY";

void display_init(void){
    ESP_LOGI(TAG, "🖥️  Display initialized");
}

void display_show_message(const char* message){
    ESP_LOGI(TAG, "📺 Message: %s", message);
}

void display_show_data(float v1, float v2){
    ESP_LOGI(TAG, "📊 Value 1: %.2f", v1);
    ESP_LOGI(TAG, "📉 Value 2: %.2f", v2);
}

void display_clear_screen(void){
    ESP_LOGI(TAG, "🧹 Screen cleared");
}
