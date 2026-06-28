
flowchart 
    A([Start]) --> B[Set result = 1]
    B --> C[Set i = 1]
    C --> D{i <= x?}
    D -- No --> K[Return result]
    D -- Yes --> E{i % 2 == 0?}
    E -- Yes --> F[result = result + i]
    E -- No --> G[result = result * i]
    F --> H{result > 1000?}
    G --> H
    H -- Yes --> I[result = result - 100]
    H -- No --> J[i = i + 1]
    I --> J
    J --> D

