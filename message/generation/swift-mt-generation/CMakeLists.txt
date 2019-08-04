cmake_minimum_required(VERSION 3.14)
project(swift-mt-generation)

add_custom_target(swift-mt-generation)

add_custom_command(
        TARGET swift-mt-generation
        PRE_BUILD
        COMMAND swift-mt-definition SR2018 https://www2.swift.com/knowledgecentre/rest/v1/publications/usgf_20180720/3.0/ ${PROJECT_SOURCE_DIR}/repository $<TARGET_FILE_DIR:swift-mt-definition>
)

add_custom_command(
        TARGET swift-mt-generation
        PRE_BUILD
        COMMAND ${PROJECT_SOURCE_DIR}/grammar_generator ${PROJECT_SOURCE_DIR}/repository/SR2018/grammars ${PROJECT_SOURCE_DIR}/repository/SR2018/parsers sr2018
)
