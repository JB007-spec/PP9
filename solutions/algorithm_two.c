flowchart TD
    A([Start]) --> B[Set state = 0]
    B --> C[Set i = 0]
    C --> D{i < len?}
    D -->|No| J{switch state}
    D -->|Yes| E{"arr[i] < 0?"}
    E -->|Yes| F[state = -1]
    E -->|No| G{"arr[i] == 0?"}
    G -->|Yes| H[state = 0]
    G -->|No| I[state = 1]
    F --> K{"state == 1?"}
    H --> K
    I --> K
    K -->|Yes| J
    K -->|No| L[i = i + 1]
    L --> D
    J --> M{"case 1?"}
    M -->|Yes| N[Return true]
    M -->|No| O[Return false]
