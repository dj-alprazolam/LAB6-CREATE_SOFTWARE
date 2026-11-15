classDiagram
    %% Базовый класс примитива
    class primitiv {
        <<abstract>>
        +string getName()*
    }

    %% Наследники примитива
    class circle {
        +string getName()
    }
    class square {
        +string getName()
    }

    %% Класс документа
    class document {
        -int id_
        -vector~unique_ptr~primitiv~~ primitiv_
        +document(int id)
        +int getId()
        +void exportdocument(string file)
        +void importdocument(string file)
        +void addprimitive(unique_ptr~primitiv~ Primitive)
        +void deletprimitive()
    }

    %% Класс представления (View)
    class Viev {
        +void massageShow(string msg)
    }

    %% Класс контроллера
    class controller {
        -unique_ptr~document~ Document_
        -unique_ptr~Viev~ viev_
        +controller(unique_ptr~Viev~ viVe)
        +void newDoc(int id)
        +void addPrimitive(unique_ptr~primitiv~ Primitive)
        +void deletePrimitiv()
        +void importDocument(string file)
        +void exportDoc(string name)
    }

    %% Отношения наследования
    primitiv <|-- circle : наследует
    primitiv <|-- square : наследует

    %% Отношения композиции/агрегации
    controller *-- document : 1 содержит 1
    controller *-- Viev : 1 содержит 1
    document *-- primitiv : 1 содержит 0..*