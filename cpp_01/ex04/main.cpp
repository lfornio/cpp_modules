#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

int errorArgc(int argc, char **argv)
{
    if (argc != 4 || !strlen(argv[1]) || !strlen(argv[2]) || !strlen(argv[3]))
    {
        std::cout << "Invalid of arguments" << std::endl;
        return (-1);
    }

    return (0);
}

std::string replaceStr(std::string str, std::string s1, std::string s2)
{

    std::size_t pos = 0;
    while ((pos = str.find(s1, pos)) != std::string::npos)
    {
        str.erase(pos, s1.length());
        str.insert(pos, s2);
    }

    return (str);
}

int openFileForRead(std::ifstream &fin, std::string name)
{
    fin.open(name);
    if (!fin.is_open())
    {
        std::cout << "The file is not open" << std::endl;
        return (-1);
    }
    return (0);
}

int openFileForWrite(std::ofstream &fout, std::ifstream &fin, std::string name)
{
    fout.open(name);
    if (!fout.is_open())
    {
        std::cout << "The file " << name << " is not open" << std::endl;
        fin.close();
        return (-1);
    }
    return (0);
}

int main(int argc, char **argv)
{
    std::string nameFile;
    std::string s1;
    std::string s2;
    std::string nameFileReplace;
    std::string tmp;
    std::ifstream fin;
    std::ofstream fout;

    if (errorArgc(argc, argv) < 0)
        return (1);
    nameFile = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    nameFileReplace = nameFile + ".replace";
    if (openFileForRead(fin, nameFile) < 0 || openFileForWrite(fout, fin, nameFileReplace) < 0)
        return (1);
    while (!fin.eof())
    {
        tmp = "";
        std::getline(fin, tmp);
        tmp = replaceStr(tmp, s1, s2);
        fout << tmp;
        fout << std::endl;
    }
    fin.close();
    fout.close();
    return (0);
}