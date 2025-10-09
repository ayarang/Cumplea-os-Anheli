#include <iostream>
#include <fstream>

int main() {
    std::ofstream htmlFile("cumpleanheli.html");

    if (!htmlFile.is_open()) {
        std::cout << "Error creando archivo" << std::endl;
        return 1;
    }

    htmlFile << "<!DOCTYPE html>\n";
    htmlFile << "<html>\n";
    htmlFile << "<head>\n";
    htmlFile << "    <title>¡Feliz Cumpleaños Anheli!</title>\n";
    htmlFile << "    <style>\n";
    htmlFile << "        body { \n";
    htmlFile << "            font-family: Arial, sans-serif; \n";
    htmlFile << "            text-align: center; \n";
    htmlFile << "            background: linear-gradient(45deg, #ff9a9e, #fad0c4);\n";
    htmlFile << "            height: 100vh;\n";
    htmlFile << "            margin: 0;\n";
    htmlFile << "            display: flex;\n";
    htmlFile << "            justify-content: center;\n";
    htmlFile << "            align-items: center;\n";
    htmlFile << "        }\n";
    htmlFile << "        .card { \n";
    htmlFile << "            padding: 40px; \n";
    htmlFile << "            background: white; \n";
    htmlFile << "            border-radius: 15px; \n";
    htmlFile << "            box-shadow: 0 8px 16px rgba(0,0,0,0.3);\n";
    htmlFile << "            max-width: 500px;\n";
    htmlFile << "        }\n";
    htmlFile << "        h1 { \n";
    htmlFile << "            color: #e91e63; \n";
    htmlFile << "            font-size: 2.5em;\n";
    htmlFile << "        }\n";
    htmlFile << "        p {\n";
    htmlFile << "            font-size: 1.2em;\n";
    htmlFile << "            color: #333;\n";
    htmlFile << "        }\n";
    htmlFile << "    </style>\n";
    htmlFile << "</head>\n";
    htmlFile << "<body>\n";
    htmlFile << "    <div class='card'>\n";
    htmlFile << "        <h1>🎉 ¡Feliz Cumpleaños Anheli! 🎂</h1>\n";
    htmlFile << "        <p>Que todos tus deseos se hagan realidad 🌟</p>\n";
    htmlFile << "        <p>¡Que tengas un día maravilloso! 💖</p>\n";
    htmlFile << "        <p>Con cariño,<br>Tu amigo</p>\n";
    htmlFile << "    </div>\n";
    htmlFile << "</body>\n";
    htmlFile << "</html>\n";

    htmlFile.close();
    std::cout << "✅ Tarjeta creada: 'cumpleanheli.html'" << std::endl;
    std::cout << "📂 Ábrelo con tu navegador" << std::endl;

    return 0;
}