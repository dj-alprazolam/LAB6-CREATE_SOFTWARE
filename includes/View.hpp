#pragma once
#include<string>
#include<fmt/core.h>

class View
{
public:
    virtual ~View() = default;
    virtual void ShowMassage(const std::string& massage ) = 0;
    virtual void ShowError(const std::string& error) = 0;
    virtual void ShowPrimitiveAdd(const std::string& name) = 0;
    virtual void ShowPrimitivDelete(const std::string& name) = 0;
    virtual void ShowDocumentExport(const std::string& filename) = 0;
    virtual void showDocumentImported(const std::string& filename, int primitivecount) = 0;
};

class consolViwe : public View{
public:
     void ShowMassage(const std::string& massage ) override;
     void ShowError(const std::string& error) override;
     void ShowPrimitiveAdd(const std::string& name) override;
     void ShowPrimitivDelete(const std::string& name) override;
     void ShowDocumentExport(const std::string& filename) override;
     void showDocumentImported(const std::string& filename, int primitivecount) override;

};

