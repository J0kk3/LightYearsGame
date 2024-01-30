# add_executable(${LIGHT_YEARS_GAME_TARGET_NAME}
#     ${CMAKE_CURRENT_SOURCE_DIR}/Main.cpp
# )

set(LIGHT_YEARS_GAME_TARGET_NAME LightYearsGame)
add_executable(${LIGHT_YEARS_GAME_TARGET_NAME} Main.cpp)

# Link SFML libraries after the executable is defined
target_link_libraries(${LIGHT_YEARS_GAME_TARGET_NAME} PUBLIC sfml-graphics sfml-window sfml-system sfml-audio)