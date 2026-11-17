classDiagram

    class primitiv {
        <<abstract>>
        +virtual ~primitiv()
        +string getName()*
        +void draw()*
    }

    class circle {
        +string getName()
        +void draw()
    }
    
    class square {
        +string getName()
        +void draw()
    }


    class document {
        -int id_
        -vector~unique_ptr~primitiv~~ primitiv_
        +int getId()
        +document(int id)
        +void exportdocument(string file)
        +void importdocument(string file)
        +void addprimitive(unique_ptr~primitiv~ Primitive)
        +bool deletePrimitive(string& deletedName)
        +bool importDocument(string file, int& importedCount)
    }

    class View {
        <<abstract>>
        +virtual ~View()
        +void ShowMassage(string massage)*
        +void ShowError(string error)*
        +void ShowPrimitiveAdd(string name)*
        +void ShowPrimitivDelete(string name)*
        +void ShowDocumentExport(string filename)*
        +void showDocumentImported(string filename, int primitivecount)*
    }


    class consolViwe {
        +void ShowMassage(string massage)
        +void ShowError(string error)
        +void ShowPrimitiveAdd(string name)
        +void ShowPrimitivDelete(string name)
        +void ShowDocumentExport(string filename)
        +void showDocumentImported(string filename, int primitivecount)
    }


    class controller {
        -unique_ptr~document~ Document_
        -unique_ptr~View~ viev_
        +controller(unique_ptr~View~ viVe)
        +void newDoc(int id)
        +void addPrimitive(unique_ptr~primitiv~ Primitive)
        +void deletePrimitiv()
        +void importDocument(string file)
        +void exportDoc(string name)
    }


    primitiv <|-- circle : наследует
    primitiv <|-- square : наследует
    View <|-- consolViwe : наследует

    controller *-- document : содержит 1
    controller *-- View : содержит 1
    document *-- primitiv : содержит 0..*