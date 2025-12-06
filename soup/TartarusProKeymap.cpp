#include "TartarusProKeymap.hpp"
#include "json.hpp"
#define LOGGING false
#if LOGGING
#include <iostream>
#endif

NAMESPACE_SOUP
{
    //contain default tartarus pro keymap
    Key tartarusProCurrentMap[20] = {  
		KEY_1, KEY_2, KEY_3, KEY_4, KEY_5,
		KEY_TAB, KEY_Q, KEY_W, KEY_E, KEY_R,
		KEY_CAPS_LOCK, KEY_A, KEY_S, KEY_D, KEY_F,
		KEY_LSHIFT, KEY_Z, KEY_X, KEY_C, KEY_SPACE
	}; 

    Key keyFromString(const std::string& str) //map the string from json into KEY
    {
        if (str == "KEY_NONE") return KEY_NONE;
        if (str == "KEY_ESCAPE") return KEY_ESCAPE;
        if (str == "KEY_F1") return KEY_F1;
        if (str == "KEY_F2") return KEY_F2;
        if (str == "KEY_F3") return KEY_F3;
        if (str == "KEY_F4") return KEY_F4;
        if (str == "KEY_F5") return KEY_F5;
        if (str == "KEY_F6") return KEY_F6;
        if (str == "KEY_F7") return KEY_F7;
        if (str == "KEY_F8") return KEY_F8;
        if (str == "KEY_F9") return KEY_F9;
        if (str == "KEY_F10") return KEY_F10;
        if (str == "KEY_F11") return KEY_F11;
        if (str == "KEY_F12") return KEY_F12;

        if (str == "KEY_BACKQUOTE") return KEY_BACKQUOTE;
        if (str == "KEY_1") return KEY_1;
        if (str == "KEY_2") return KEY_2;
        if (str == "KEY_3") return KEY_3;
        if (str == "KEY_4") return KEY_4;
        if (str == "KEY_5") return KEY_5;
        if (str == "KEY_6") return KEY_6;
        if (str == "KEY_7") return KEY_7;
        if (str == "KEY_8") return KEY_8;
        if (str == "KEY_9") return KEY_9;
        if (str == "KEY_0") return KEY_0;
        if (str == "KEY_MINUS") return KEY_MINUS;
        if (str == "KEY_EQUALS") return KEY_EQUALS;
        if (str == "KEY_BACKSPACE") return KEY_BACKSPACE;

        if (str == "KEY_TAB") return KEY_TAB;
        if (str == "KEY_Q") return KEY_Q;
        if (str == "KEY_W") return KEY_W;
        if (str == "KEY_E") return KEY_E;
        if (str == "KEY_R") return KEY_R;
        if (str == "KEY_T") return KEY_T;
        if (str == "KEY_Y") return KEY_Y;
        if (str == "KEY_U") return KEY_U;
        if (str == "KEY_I") return KEY_I;
        if (str == "KEY_O") return KEY_O;
        if (str == "KEY_P") return KEY_P;
        if (str == "KEY_BRACKET_LEFT") return KEY_BRACKET_LEFT;
        if (str == "KEY_BRACKET_RIGHT") return KEY_BRACKET_RIGHT;
        if (str == "KEY_ENTER") return KEY_ENTER;
        if (str == "KEY_CAPS_LOCK") return KEY_CAPS_LOCK;

        if (str == "KEY_A") return KEY_A;
        if (str == "KEY_S") return KEY_S;
        if (str == "KEY_D") return KEY_D;
        if (str == "KEY_F") return KEY_F;
        if (str == "KEY_G") return KEY_G;
        if (str == "KEY_H") return KEY_H;
        if (str == "KEY_J") return KEY_J;
        if (str == "KEY_K") return KEY_K;
        if (str == "KEY_L") return KEY_L;
        if (str == "KEY_SEMICOLON") return KEY_SEMICOLON;
        if (str == "KEY_QUOTE") return KEY_QUOTE;
        if (str == "KEY_BACKSLASH") return KEY_BACKSLASH;

        if (str == "KEY_LSHIFT") return KEY_LSHIFT;
        if (str == "KEY_INTL_BACKSLASH") return KEY_INTL_BACKSLASH;
        if (str == "KEY_Z") return KEY_Z;
        if (str == "KEY_X") return KEY_X;
        if (str == "KEY_C") return KEY_C;
        if (str == "KEY_V") return KEY_V;
        if (str == "KEY_B") return KEY_B;
        if (str == "KEY_N") return KEY_N;
        if (str == "KEY_M") return KEY_M;
        if (str == "KEY_COMMA") return KEY_COMMA;
        if (str == "KEY_PERIOD") return KEY_PERIOD;
        if (str == "KEY_SLASH") return KEY_SLASH;
        if (str == "KEY_RSHIFT") return KEY_RSHIFT;

        if (str == "KEY_LCTRL") return KEY_LCTRL;
        if (str == "KEY_LMETA") return KEY_LMETA;
        if (str == "KEY_LALT") return KEY_LALT;
        if (str == "KEY_IME_OFF") return KEY_IME_OFF;
        if (str == "KEY_SPACE") return KEY_SPACE;
        if (str == "KEY_IME_ON") return KEY_IME_ON;
        if (str == "KEY_RALT") return KEY_RALT;
        if (str == "KEY_RMETA") return KEY_RMETA;
        if (str == "KEY_FN") return KEY_FN;
        if (str == "KEY_CTX") return KEY_CTX;
        if (str == "KEY_RCTRL") return KEY_RCTRL;

        if (str == "KEY_PRINT_SCREEN") return KEY_PRINT_SCREEN;
        if (str == "KEY_PAUSE") return KEY_PAUSE;
        if (str == "KEY_SCROLL_LOCK") return KEY_SCROLL_LOCK;

        if (str == "KEY_INSERT") return KEY_INSERT;
        if (str == "KEY_HOME") return KEY_HOME;
        if (str == "KEY_PAGE_UP") return KEY_PAGE_UP;
        if (str == "KEY_DEL") return KEY_DEL;
        if (str == "KEY_END") return KEY_END;
        if (str == "KEY_PAGE_DOWN") return KEY_PAGE_DOWN;

        if (str == "KEY_ARROW_UP") return KEY_ARROW_UP;
        if (str == "KEY_ARROW_LEFT") return KEY_ARROW_LEFT;
        if (str == "KEY_ARROW_DOWN") return KEY_ARROW_DOWN;
        if (str == "KEY_ARROW_RIGHT") return KEY_ARROW_RIGHT;

        if (str == "KEY_NUM_LOCK") return KEY_NUM_LOCK;
        if (str == "KEY_NUMPAD_DIVIDE") return KEY_NUMPAD_DIVIDE;
        if (str == "KEY_NUMPAD_MULTIPLY") return KEY_NUMPAD_MULTIPLY;
        if (str == "KEY_NUMPAD_SUBTRACT") return KEY_NUMPAD_SUBTRACT;
        if (str == "KEY_NUMPAD7") return KEY_NUMPAD7;
        if (str == "KEY_NUMPAD8") return KEY_NUMPAD8;
        if (str == "KEY_NUMPAD9") return KEY_NUMPAD9;
        if (str == "KEY_NUMPAD_ADD") return KEY_NUMPAD_ADD;
        if (str == "KEY_NUMPAD4") return KEY_NUMPAD4;
        if (str == "KEY_NUMPAD5") return KEY_NUMPAD5;
        if (str == "KEY_NUMPAD6") return KEY_NUMPAD6;
        if (str == "KEY_NUMPAD1") return KEY_NUMPAD1;
        if (str == "KEY_NUMPAD2") return KEY_NUMPAD2;
        if (str == "KEY_NUMPAD3") return KEY_NUMPAD3;
        if (str == "KEY_NUMPAD_ENTER") return KEY_NUMPAD_ENTER;
        if (str == "KEY_NUMPAD0") return KEY_NUMPAD0;
        if (str == "KEY_NUMPAD_DECIMAL") return KEY_NUMPAD_DECIMAL;

        if (str == "KEY_STOP_MEDIA") return KEY_STOP_MEDIA;
        if (str == "KEY_PREV_TRACK") return KEY_PREV_TRACK;
        if (str == "KEY_PLAY_PAUSE") return KEY_PLAY_PAUSE;
        if (str == "KEY_NEXT_TRACK") return KEY_NEXT_TRACK;

        if (str == "KEY_F13") return KEY_F13;
        if (str == "KEY_F14") return KEY_F14;
        if (str == "KEY_F15") return KEY_F15;
        if (str == "KEY_F16") return KEY_F16;
        if (str == "KEY_F17") return KEY_F17;
        if (str == "KEY_F18") return KEY_F18;
        if (str == "KEY_F19") return KEY_F19;
        if (str == "KEY_F20") return KEY_F20;
        if (str == "KEY_F21") return KEY_F21;
        if (str == "KEY_F22") return KEY_F22;

        if (str == "KEY_OEM_1") return KEY_OEM_1;
        if (str == "KEY_OEM_2") return KEY_OEM_2;
        if (str == "KEY_OEM_3") return KEY_OEM_3;
        if (str == "KEY_OEM_4") return KEY_OEM_4;
        if (str == "KEY_OEM_5") return KEY_OEM_5;
        if (str == "KEY_OEM_6") return KEY_OEM_6;
        if (str == "KEY_OEM_7") return KEY_OEM_7;
        if (str == "KEY_OEM_8") return KEY_OEM_8;
        if (str == "KEY_OEM_9") return KEY_OEM_9;
        if (str == "KEY_OEM_10") return KEY_OEM_10;

        return KEY_NONE; // fallback if no match
    }

    // Load JSON array into the key array
    void loadTartarusMapFromJson(JsonNode* node, Key* map, size_t mapSize)
    {
        if (node->getType() != JSON_OBJECT)
            return;

        JsonObject* obj = &node->asObj();
        JsonNode* arrNode = obj->find("TartarusProMap");

        if (!arrNode || arrNode->getType() != JSON_ARRAY) {
            #if LOGGING
                std::cout << "\"TartarusProMap\" not found or not an array\n";
                std::cout << "Using default mapping\n";
            #endif
            return;
        }

        JsonArray* arr = &arrNode->asArr();

        if (arr->children.size() != mapSize) { //check json size = needed size
            #if LOGGING
                std::cerr << "Error: JSON array size (" 
                        << arr->children.size() 
                        << ") does not match expected map size (" 
                        << mapSize << ") fallback to default map" 
                        << "\n";
            #endif
			return; // throw out
        }

        for (size_t i = 0; i < mapSize; i++) {
            JsonNode* elem = arr->children[i];
            if (elem->getType() != JSON_STRING) { //safe_guard
                #if LOGGING
                    std::cout << "Entry " << i << " is not a string, fallback to KEY_NONE\n";
                #endif
                map[i] = KEY_NONE; 
                continue;
            }
            std::string keyName = static_cast<JsonString*>(elem)->value;
            #if LOGGING
                std::cout << "array " << i << " = " << keyName << "\n";
            #endif
            map[i] = keyFromString(keyName); //map into array
        }
    }
    void loadTartarusJsonFile(std::filesystem::path path){ //Load file and throw into loadTartarusMapFromJson
        #if LOGGING
        std::cout << "Loading file: " << path << "\n";
        #endif

        auto jsonInput = json::decodeFile(path);
        if (jsonInput)
        {
            #if LOGGING
                std::cout << "json found!\nParsing...\n";
            #endif
            loadTartarusMapFromJson(jsonInput,tartarusProCurrentMap, 20); //path, array, size
        }
        else{
            #if LOGGING
                std::cout << "FAILED to parse JSON! Fallback to default mapping\n"; //just use unchanged value in that array
            #endif
        }
        #if LOGGING //for sanity check
            for(int i=0;i<20;i++){
                std::cout<<"0x"
                <<std::hex
                <<std::setw(2)
                <<std::setfill('0')
                <<static_cast<int>(soup::tartarusProCurrentMap[i])
                <<"\n";
            }
        #endif
    }
}
