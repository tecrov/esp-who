// Note: esp-dl is required to run esp-who.

void who::task::WhoTaskState::print_task_status()
{
    // ... existing code ...

    for (UBaseType_t i = 0; i < uxArraySize; i++) {
        printf("Task: %s\tPriority: %u\tState: %s\tStack: %u\tNumber: %u\n",
            task_status_array[i].pcTaskName,
            task_status_array[i].uxCurrentPriority,
            get_task_state_string(task_status_array[i].eCurrentState),
            task_status_array[i].usStackHighWaterMark,
            task_status_array[i].xTaskNumber
            // task_status_array[i].xCoreID, // Removed: Not available in ESP-IDF v5.5 FreeRTOS for ESP32-S3
        );
    }
    // ... rest of code ...
}