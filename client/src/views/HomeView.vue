<script setup>
import { GoogleMap, Marker } from 'vue3-google-map'
import { env } from '../stores/env'

const apiKey = env.apiKey
const center = { lat: 37.238077, lng: 126.773033 }
</script>

<template>
  <main> 
    <div>
      <GoogleMap
      :api-key= apiKey
      style="width: 75%; height: 500px"
      :center="center"
      :zoom="17"
      >
      <Marker :options="{ position: center }" />
    </GoogleMap>
  </div>
  <div></div>
</main>
</template>

<style scoped>

</style>