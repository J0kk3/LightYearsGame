# add_subdirectory(src)
set(LIGHT_YEARS_GAME_TARGET_NAME LightYearsGame)
add_executable(${LIGHT_YEARS_GAME_TARGET_NAME}
${CMAKE_CURRENT_SOURCE_DIR}/src/Main.cpp
${CMAKE_CURRENT_SOURCE_DIR}/src/framework/Application.cpp
${CMAKE_CURRENT_SOURCE_DIR}/include/framework/Application.h
)

target_include_directories(${LIGHT_YEARS_GAME_TARGET_NAME} PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(${LIGHT_YEARS_GAME_TARGET_NAME} PUBLIC sfml-graphics sfml-window sfml-system sfml-audio)

function(CopyLibToTarget LIB_NAME TARGET_NAME)
add_custom_command(
    TARGET ${TARGET_NAME}
    POST_BUILD
    COMMAND
    ${CMAKE_COMMAND} -E copy_if_different
    $<TARGET_FILE:${LIB_NAME}>
    $<TARGET_FILE_DIR:${LIGHT_YEARS_GAME_TARGET_NAME}>
)
endfunction(CopyLibToTarget LIB_NAME TARGET_NAME)

CopyLibToTarget(sfml-graphics ${LIGHT_YEARS_GAME_TARGET_NAME})
CopyLibToTarget(sfml-window ${LIGHT_YEARS_GAME_TARGET_NAME})
CopyLibToTarget(sfml-system ${LIGHT_YEARS_GAME_TARGET_NAME})
CopyLibToTarget(sfml-audio ${LIGHT_YEARS_GAME_TARGET_NAME})